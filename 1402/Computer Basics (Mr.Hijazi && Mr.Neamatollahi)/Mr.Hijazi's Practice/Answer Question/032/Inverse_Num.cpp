#include<iostream>
using namespace std;

int main()
{
int x;
cin>>x;
int i=0;
while(x>0)
{
    i=(10*i)+(x%10);
    x/=10;
}
cout<<i;
}
