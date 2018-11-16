#include <iostream>
using namespace std;

int main()

{
    int counter=0;
    int number1=0;
    int number2=0;

    while(counter<5)
    {
        cout<<"Enter  one number:";
        cin>>number1;
        cout<<"Enter  the other number:";
        cin>>number2;
        if(number1<=number2)
            number1=number2;

        counter=counter+1;
    }
    if (counter>=5)
        cout<<"Largest number is:"<<number1<<endl;
    return 0;
}
