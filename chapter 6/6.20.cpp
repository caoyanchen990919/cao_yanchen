#include <iostream>

using namespace std;

int multiple(int,int);

int main()
{
    int a=0;
    int b=0;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    if(multiple(a,b)==0)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
int multiple(int a,int b)
{

    return (a%b);
}
