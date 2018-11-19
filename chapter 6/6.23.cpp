#include <iostream>
using namespace std;

void a(int,char);

int main()
{
    int side=0;
    char character;
    cout<<"Enter side:";
    cin>>side;
    cout<<"Enter character:";
    cin>>character;
    cout<<"\n";
    a(side,character);
}
void a(int side,char fillcharcter)
{
    for(int row=1;row<=side;row++)
    {
        for(int b=1;b<=side;b++)
                cout<<fillcharcter;
        cout<<"\n";
    }
}
