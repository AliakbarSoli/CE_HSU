#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    int n=0;
    int z,w;
    if(x>y)
    {
        z=y;
        w=x;
    }
    else
    {
        z=x;
        w=y;
    }
    while(n<z-1)
    {
        w+=w;
        n++;
    }
    cout<<w;
}
