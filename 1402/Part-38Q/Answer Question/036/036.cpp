#include<iostream>
using namespace std;
int main()
{
    int x[100];
    int n,z=0;
    for(int i=0;i<100;i++)
    {
        cin>>x[i];
    }
    cin>>n;
    for(int i=0;i<100;i++)
    {
        if(n==x[i])
        {
            cout<<i<<endl;
            z++;
        }
    }
    if(z==0)
    {
        cout<<"Not Equal !";
    }

}
