#include<iostream>
using namespace std;

int main()
{
    int x=0,y=0,z=0,n;
    cin>>n;
    x=n;
    for(int i=0;i<2;i++)
    {
        cin>>n;
        if(n>x)
        {
            z=y;
            y=x;
            x=n;
        }
        else if(n>y)
        {
            z=y;
            y=n;
        }
        else if(n>z || n<z)
        {
            z=n;
        }
    }
    cout<<"Max : "<<x<<endl;
    cout<<"Mid : "<<y<<endl;
    cout<<"Min : "<<z<<endl;
}
