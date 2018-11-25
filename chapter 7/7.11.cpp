#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main()
{
    array<int,10>counts={0};

    array<int,15>bonus={0};
    int i=0;
    while(i<=14)
    {
        bonus[i]=bonus[i]+1;
        cout<<bonus[i]<<endl;
        i++;
    }
    array<double,12>monthlyTemperatures={0};
    int b=0;
    while(b<=11)
    {
        cout<<"Enter the monthlyTemperatures :";
        cin>>monthlyTemperatures[b];
        cout<<monthlyTemperatures[b]<<endl;
        b++;
    }
    array<int,5>bestScores={0};
    int c=0;
    while(c<=4)
    {
        cout<<bestScores[c]<<endl;
        c++;
    }
    return 0;
}
