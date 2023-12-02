#include<iostream>
using namespace std;
int main()
{
    int n=0,x;
    cin>>x;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
          n++;
        }
    }
    if(n==0)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number";
    }
}
