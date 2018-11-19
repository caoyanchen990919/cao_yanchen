#include <iostream>
using namespace std;

void a(int);

int main()
{
    int side=0;
    cout<<"Enter side:";
    cin>>side;
    cout<<"\n";
    a(side);
}
void a(int side)
{
    for(int row=1;row<=side;row++)
    {
        for(int b=1;b<=side;b++)
                cout<<"*";
        cout<<"\n";

    }
}
