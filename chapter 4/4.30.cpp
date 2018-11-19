#include <iostream>
using namespace std;

int main()
{
    double a=3.14159;
    double b=0.000;//r
    double c=0.00000;//d
    double d=0.0000;//l
    double e=0.0000;//s
    cout<<"Enter the r :";
    cin>>b;
    c=2*b;
    d=2*a*b;
    e=a*b*b;
    cout<<"The D is :"<<c<<endl;
    cout<<"The L is :"<<d<<endl;
    cout<<"The area is :"<<e<<endl;
    return 0;
}
