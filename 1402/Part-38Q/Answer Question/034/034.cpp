#include<iostream>

using namespace std;
int main()
{
    int n[100];
    for(int i=0;i<100;i++)
    {
        cin>>n[i];
    }
    for(int i=99;i>=0;i--)
    {
        cout<<n[i]<<endl;
    }

}
