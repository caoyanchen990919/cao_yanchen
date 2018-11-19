#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    x=fabs(7.5);
    cout<<"a):"<<x<<endl;
    y=floor(7.5);
    cout<<"b):"<<y<<endl;
    a=fabs(0.0);
    cout<<"c):"<<a<<endl;
    b=ceil(0.0);
    cout<<"d):"<<b<<endl;
    c=fabs(-6.4);
    cout<<"e):"<<c<<endl;
    d=ceil(-6.4);
    cout<<"f):"<<d<<endl;
    e=ceil(-fabs(-8+floor(-5.5)));
    cout<<"g):"<<e<<endl;

}
