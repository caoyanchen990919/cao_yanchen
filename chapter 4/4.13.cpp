#include <iostream>
using namespace std;

int main()
{
    double gallons=0.000000;
    double mile=0.000000;
    double gallonsSum=0.000000;
    double mileSum=0.000000;
    double thistrip=0.000000;

    cout<<"Enter miles driven(-1 to quit): ";

    while(cin>>mile)
    {
        if (mile==-1)
            return 0;
        cout<<"Enter gallons used: ";
        cin>>gallons;
        thistrip=mile/(gallons*1.0000000);

        gallonsSum+=gallons;
        mileSum+=mile;
        cout<<"MPG this trip:"<<thistrip<<endl;
        cout<<"Total MPG: "<<mileSum/(gallonsSum*1.0000000)<<endl;
        cout<<"Enter miles driven(-1 to quit): ";


    }
    return 0;
}
