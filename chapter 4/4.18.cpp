#include <iostream>
using namespace std;

int N=1;
int main()

{
    cout<<"N\t10*N\t100*N\t1000*N\t"<<endl;;
    while(N<=5)
    {
        cout<<N<<"\t"<<10*N<<"\t"<<100*N<<"\t"<<1000*N<<endl;

        N=N+1;
    }
    return 0;
}
