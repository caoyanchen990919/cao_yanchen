#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int account;
    double beginningbalance;
    double totalcharges;
    double totalcredits;
    double creditlimit;
    double newbalance;

    cout<<"Enter account number (-1 to quit ):";
    cin>>account;
    while (account==-1)
    {
        return 0;
    }

    cout<<"Enter beginning balance:";
    cin>>beginningbalance;
    cout<<"Enter total charges:";
    cin>>totalcharges;
    cout<<"Enter total credits:";
    cin>>totalcredits;
    cout<<"Enter credit limit:";
    cin>> creditlimit;


    while (account!=-1)
    {
        newbalance=beginningbalance+totalcharges-totalcredits;
        if (newbalance>creditlimit)
        {
            cout<<"Account:"<<account<<endl;
            cout<<"Credit limit:"<<creditlimit<<endl;
            cout<<"Balance:"<<newbalance<<endl;
            cout<<"Credit Limit Exceeded."<<endl;
        }
        cout<<"Enter account number (-1 to quit ):";
    cin>>account;
    while (account==-1)
    {
        return 0;
    }
    cout<<"Enter beginning balance:";
    cin>>beginningbalance;
    cout<<"Enter total charges:";
    cin>>totalcharges;
    cout<<"Enter total credits:";
    cin>>totalcredits;
    cout<<"Enter credit limit:";
    cin>> creditlimit;
    }
   return 0;

}
