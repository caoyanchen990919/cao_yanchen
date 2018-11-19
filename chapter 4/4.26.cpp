#include <iostream>
using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int number=00000;

    cout<<"Enter one number:";
    cin>>number;
    if (number<=99999)
    {
        if (number>=10000)
        {
       a=number%10;
        number=number/10;
        b=number%10;
        number=number/10;
        c=number%10;
        number=number/10;
        d=number%10;
        number=number/10;
        e=number%10;
        }
        else
    {
        cout<<"Error!"<<endl;
        return 0;
    }
    }
    else
    {
        cout<<"Error!"<<endl;
        return 0;
    }
    if(a==e)
    {
        if(b==d)
            cout<<"Yes!";
        else
            cout<<"No!";
    }
    else
        cout<<"No!";
        return 0;




}
