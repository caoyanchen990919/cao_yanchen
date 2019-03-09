#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class Matrix
{
    friend std::ostream &operator<<( std::ostream&, const Matrix &);
    friend std::istream &operator>>( std::istream&, Matrix &);
private:
    int elements1=1;
    int elements2=2;
    int elements3=3;
    int elements4=4;
    int elements5=5;
};


#endif // MATRIX_H_INCLUDED
