#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    array<double,100>temperatures;
    double sum;
    double a;
    int i=0;
    int b=0;
    cout<<"Enter a number when you want to stop (b must <=99!!!):";
    cin>>b;
    while (i<=b)
    {
        cout<<i;
        cout<<"Enter the temperatures: ";
        cin>>a;
        temperatures[i]=a;
        sum+=temperatures[i];
        i++;

    }
    cout<<"Sum is :"<<sum;
}
