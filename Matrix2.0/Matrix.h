#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include<iostream>
#include<iomanip>
using namespace std;

class Matrix
{
public:
	Matrix();
	Matrix(int ,int );
	Matrix(const Matrix &);
	~Matrix();
	Matrix operator+(Matrix &);
	Matrix operator*(Matrix &);
	Matrix operator=(Matrix &);
	friend istream & operator>>(istream &,Matrix &);
	friend ostream & operator<<(ostream &,Matrix &);
private:
	int row;
	int column;
	double **pt;
};

#endif
