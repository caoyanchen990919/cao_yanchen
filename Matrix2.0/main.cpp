#include<iostream>
#include<iomanip>
#include<cmath>
#include"Matrix.h"

using namespace std;
int main()
{

	int r,c;
	Matrix temp1,temp2;
	cout<<"请输入矩阵M1的行数（N）和列数（M）："<<endl;
	cin>>r>>c;
	Matrix M1(r,c);
	cin>>M1;
	cout<<"请输入矩阵M2的行数（N）和列数（M）："<<endl;
	cin>>r>>c;
	Matrix M2(r,c);
	cin>>M2;
	cout<<"M1="<<endl<<M1<<endl;
	cout<<"M2="<<endl<<M2<<endl;
	cout<<"M1与M2的运算结果："<<endl<<endl;
	temp1=M1+M2;
	temp2=M1*M2;
	cout<<"M1+M2="<<endl<<temp1<<endl;
	cout<<"M1*M2="<<endl<<temp2<<endl;
	return 0;
}
