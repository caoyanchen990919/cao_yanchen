#include <iostream>


using namespace std;

int main()
{
    unsigned int values[5]={2,4,6,8,10};

    unsigned int *vPtr=&values[0];//first situation
    unsigned int *Vptr=values;//second situation
    cout<<vPtr<<endl;
    cout<<Vptr;
}
