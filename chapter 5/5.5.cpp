#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int sum=0;
    int counter=0;
    cout<<"Enter the amount of the number:";
    cin>>counter;

    for(int i=0;i<counter;i++)
    {
        cout<<"Enter the number:";
        cin>>a;
        sum+=a;

    }
    cout<<"Sum is:"<<sum<<endl;
}
