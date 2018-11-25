#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
    array<double,11>a={1,2,3,4,5,6,7,8,9,10,11};
    array<double,34>b={0};

    int i=0;
    while( i<=10)
    {
        b[i]=a[i];
        cout<<b[i]<<endl;
        i++;

    }
    while(i>10&&i<34)
    {
        cout<<b[i]<<endl;
        i++;
    }

}
