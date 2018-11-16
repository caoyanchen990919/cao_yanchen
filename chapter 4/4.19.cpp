#include <iostream>
using namespace std;

int main()
{
    int a=0;//largest
    int b=0;
    int c=0;//larger
   int counter=1;
   cout<<"Enter number:";
   cin>>a;
   cout<<"Enter next number:";
   cin>>b;
   if(b>a)
   {
      c=a;
      a=b;
   }

   else
    c=b;
   counter=counter+1;
   while(counter<10)
   {
       cout<<"Enter next number:";
       cin>>b;
       if(b>a)
       {
            c=a;
            a=b;
       }
       else if(b>c)
        c=b;
       counter++;
   }
   cout<<"Largest number is:"<<a<<endl;
   cout<<"Larger number is:"<<c<<endl;


return 0;

}
