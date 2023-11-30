#include<iostream>

using namespace std;
int main()
{
    int n,z;
    cin>>n;
    int y=1;
    int x=1;
    int f=1;
    y=x+y;
    while(y<=n-2)
    {
        z=y;
        y=y+f;
        f=z;
    }
    if(y==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
