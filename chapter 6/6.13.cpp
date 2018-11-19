#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int  main()
{
    double x=0.000;
    double y=0;
    cout<<"Enter x :(-1 to quit)";
    cin>>x;
    while (x!=0)
    {
            y=floor(x+0.5);
            cout<<"x= "<<x<<"\ny= "<<y<<endl;
            cout<<"Enter x :(-1 to quit)";
            cin>>x;


    }
    return 0;

}
