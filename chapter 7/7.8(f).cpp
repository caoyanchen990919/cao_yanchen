#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main()
{
    array<double,99>w={1,2,3,4,5,6,7,8,9};
    int i=0;
    double a=0.000;//max
    double b=99999999999999999999999999999999999999;//min
    while(i<=98)
    {
        cin>>w[i];
        a=max(a,w[i]);
        b=min(b,w[i]);
        i++;
    }
    cout<<"Max is "<<a<<endl;
    cout<<"Min is "<<b<<endl;
}
