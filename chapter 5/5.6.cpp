#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int counter=0;
    int ave=0;
    int sum=0;
    for (int i=0;i<9999;i++)
    {

        cout<<"Enter the number : ";
        cin>>a;
        if (a==9999)
            break;

        sum+=a;
        counter++;


    }
    ave=sum/counter;
    cout<<"Ave is "<<ave<<endl;
    return 0;
}
