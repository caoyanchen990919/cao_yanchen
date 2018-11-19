#include <iostream>
using namespace std;

int main()
{
    double a=0;
    double b=0;
    double c=0;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    if(a+b>c)
    {
        if(a+c>b)
        {
            if(b+c>a)
                cout<<"Yes!"<<endl;
            else
                cout<<"No!"<<endl;
        }
        else
            cout<<"No!"<<endl;
    }
    else
        cout<<"No!"<<endl;

}
