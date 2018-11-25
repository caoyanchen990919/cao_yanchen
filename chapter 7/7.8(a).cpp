#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
    array<int,6>alphabet={1,2,3,4,5,6};
    int a=0;
    cout<<"Enter the number:";
    cin>>a;
    if (int i=a-1)
        {
            alphabet[i];
            cout<<alphabet[i]<<endl;

        }
}
