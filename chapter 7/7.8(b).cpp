#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    int a=0;
    double b=0.000;
    array<double,4>grades={1,2,3,4};
    cout<<"Enter one number between 1 to 4:";
    cin>>a;
    cout<<"Enter grade:";
    cin>>b;
    grades[a-1]=b;
    cout<<"The NO. "<<a<<" grade is"<<grades[a-1]<<endl;
}
