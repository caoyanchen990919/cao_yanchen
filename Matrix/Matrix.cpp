#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include "Matrix.h"

using namespace std;
ostream &operator<<( ostream &output,const Matrix &matrix )
{
    output<<matrix.elements1<<"\n"<<matrix.elements2<<"\n"<<matrix.elements3<<"\n"<<matrix.elements4<<"\n"<<matrix.elements5<<endl;
    return output;
}
istream &operator>>(istream &input,Matrix &matrix)
{

    input>>setw(1)>>matrix.elements1;
    input.ignore(1);
    input>>setw(1)>>matrix.elements2;
    input.ignore(1);
    input>>setw(1)>>matrix.elements3;
    input.ignore(1);
    input>>setw(1)>>matrix.elements4;
    input.ignore(1);
    input>>setw(1)>>matrix.elements5;
    return input;
}
