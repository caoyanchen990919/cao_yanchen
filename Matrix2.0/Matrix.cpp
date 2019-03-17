#include<iostream>
#include<iomanip>
#include<cmath>
#include"Matrix.h"

using namespace std;

Matrix::Matrix()
{
	row=0;
    column=0;
	pt=NULL;
}

Matrix::Matrix(int r,int c):row(r),column(c)
{
	if(row<1||column<1)
		cout<<"矩阵的行数和列数都必须大于0！"<<endl;
	else
	{
	    pt=new double*[row];
		for(int i=0;i<row;i++)
		{
		   *(pt+i)=new double[column];
		   for(int j=0;j<column;j++)
		   {
			  *(*(pt+i)+j)=0.0;
		   }
		}
	}
}

Matrix::Matrix(const Matrix &m)
{
	row=m.row;
	column=m.column;
	pt=new double*[row];
    for(int i=0;i<row;i++)
	{
	    *(pt+i)=new double[column];
		for(int j=0;j<column;j++)
		{
		   *(*(pt+i)+j)=m.pt[i][j];
		}
	}
}

Matrix::~Matrix()
{
	if(pt!=NULL)
	{
		for(int i=0;i<row;i++)
			delete[] pt[i];
		delete[] pt;
	}
}

istream & operator>>(istream &input,Matrix &m)
{
	cout<<"请输入"<<m.row*m.column<<"个数作为矩阵元素："<<endl;
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.column;j++)
		{
		    input>>m.pt[i][j];
		}
	}
	return input;
}


ostream & operator<<(ostream &output,Matrix &m)
{
	for(int i=0;i<m.row;i++)
	{
		for(int j=0;j<m.column;j++)
		{
		    output<<left<<setw(5)<<m.pt[i][j];
		}
		output<<endl;
	}
	return output;
}


Matrix Matrix::operator+(Matrix &m)
{
	Matrix temp;
	if(row!=m.row||column!=m.column)
		cout<<"矩阵M1和矩阵M2不是同类型矩阵，不能相加！"<<endl<<endl;
	else
	{
		temp.row=row;
		temp.column=column;
        temp.pt=new double*[temp.row];
        for(int i=0;i<temp.row;i++)
		{
           temp.pt[i]=new double[temp.column];
		   for(int j=0;j<temp.column;j++)
		   {
			  temp.pt[i][j]=pt[i][j]+m.pt[i][j];
		   }
		}
	}
    return temp;
}


Matrix Matrix::operator*(Matrix &m)
{
	Matrix temp;
	if(column!=m.row)
		cout<<"矩阵M1的列数和矩阵M2的行数不相等，不能相乘！"<<endl<<endl;
	else
	{
		temp.row=row;
		temp.column=m.column;
        temp.pt=new double*[temp.row];
	    for(int i=0;i<temp.row;i++)
		{
			temp.pt[i]=new double[temp.column];
		    for(int j=0;j<temp.column;j++)
			{
			    double sum=0;
			    for(int k=0;k<column;k++)
				{
				    sum=sum+pt[i][k]*m.pt[k][j];
				}
			    temp.pt[i][j]=sum;
			}
		}
	}
    return temp;
}


Matrix Matrix::operator=(Matrix &m)
{
	row=m.row;
	column=m.column;
	pt=new double*[m.row];
	for(int i=0;i<m.row;i++)
	{
		pt[i]=new double[m.column];
		for(int j=0;j<m.column;j++)
		{
			pt[i][j]=m.pt[i][j];
		}
	}
	return *this;
}
