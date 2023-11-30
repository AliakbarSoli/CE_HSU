#include<iostream>
using namespace std;

int main()
{
    int x,p=0,n=0,z=0;
    for(int i=1;i<=100;i++)
    {
        cin>>x;
        if(x>0)
        {
            p++;
        }
        else if(x==0)
        {
            z++;
        }
        else
        {
            n++;
        }
    }
    cout<<"Pos : "<<p<<endl;
    cout<<"Neg : "<<n<<endl;
    cout<<"Zero : "<<z<<endl;
}

