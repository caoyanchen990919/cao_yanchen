#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double salary;
    int a;
    a=200;
    double SALARY;

    cout<<"Enter sales in dollars (-1 to quit ):";
    cin>>salary;
    while (salary==-1)
    {
        return 0;
    }



    while (salary!=-1)
    {
      SALARY=a+0.09*salary;
        cout<<"Salary is:$"<<SALARY<<endl;
    while (salary==-1)
    {
        return 0;
    }
     cout<<"Enter sales in dollars (-1 to quit ):";
    cin>>salary;
    }
   return 0;

}
