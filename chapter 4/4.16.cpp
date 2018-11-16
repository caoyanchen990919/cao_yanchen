#include <iostream>
using  namespace std;

double a=0.0000;
double b=0.0000;
double c=0.0000;

int  main()
{
    cout<<"Enter hours worked (-1 to end) :";
    cin>>a;
    while(a==-1)
        return 0;
    while(a!=-1)
    {
        cout<<"Enter hourly rate of the employee ($00.00) :";
        cin>>b;
        if(a<=40)
            c=a*b;
        else
            c=40*b+1.5*(a-40)*b;
        cout<<"Salary is $"<<c<<endl;
        cout<<"Enter hours worked (-1 to end) :";
        cin>>a;


    }
    return 0;
}
