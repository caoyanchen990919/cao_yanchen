#include <iostream>
using namespace std;

int main()
{
    unsigned int passes =0;
    unsigned int failures =0;
    unsigned int studentcounter=1;
    while (studentcounter<=10)
    {
        cout<<"Enter result (1=pass,2=failure):";
        int result=0;
        cin>>result;
    while (result<=0)
    {
        cout<<"ERROR!Enter one number(1 or 2) :";
        cin>>result;
    }
    while (result+1>3)
    {
        cout<<"ERROR!Enter one number(1 or 2) :";
        cin>>result;
    }
    if (result==1)
        passes=passes+1;
    else
        failures=failures+1;
    studentcounter=studentcounter+1;
    }
    cout<<"Passed "<<passes<<"\nFailed "<<failures<<endl;

    if (passes>=8)
        cout<<"Bonus to instructor!"<<endl;
}
