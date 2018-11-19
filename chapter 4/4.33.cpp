#include <iostream>
using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    double d=0;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    if(a<b)
    {
        d=a;
        a=b;
        b=d;
    }
    if(a<c)
    {
        d=a;
        a=c;
        c=d;
    }
    if (b*b+c*c-a*a==0)
        cout<<"Yes!"<<endl;
    else
        cout<<"No!"<<endl;
    return 0;

}
