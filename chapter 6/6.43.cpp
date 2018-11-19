#include <iostream>

#include "stdio.h"
using namespace std;

int main()
{
    int c=0;

    if((c=cin.get())!=EOF)
    {
        main();
        cout<<c;
    }
}
