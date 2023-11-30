#include <iostream>
using namespace std;
int main()
{
    double z=0,u;
    int n;
    cin>>n;
    for(int j=0;j<=n;j++)
    {
    u=1;
    for(int i=1;i<=j;i++)
    {
        u=u*i;
    }

    if(u==0)
    {
       u=1;
    }
    z +=(1/u);

    }
    cout<<z;
}
