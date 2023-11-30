#include<iostream>
using namespace std;
int main()
{
    int x,n=0;
    cout<<"Enter The Num : ";
    cin>>x;
    while(x!=0)
    {
        x/=10;
        n++;
    }
    cout<<"Number Of Digits : "<<n;
}
