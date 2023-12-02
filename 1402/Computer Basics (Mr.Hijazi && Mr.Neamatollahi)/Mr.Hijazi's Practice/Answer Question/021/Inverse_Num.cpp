#include<iostream>
using namespace std;

int main()
{
    int x,i=0;
    cin>>x;
    while(x>0)
    {
        i=(10*i)+(x%10);
        x/=10;
    }
    cout<<"Inverse Num : "<<i;

    return 0;
}
