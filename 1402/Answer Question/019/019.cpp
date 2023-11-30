#include<iostream>
using namespace std;
int main()
{
    int temp=0,ma=0,n,m;
    cout<<"Enter The Num : ";
    cin>>n;
    cout<<"Enter The Num : ";
    cin>>m;
    if(n>=m)
    {
    temp=m;
    ma=n;
    }
    else if(m>=n)
    {
    temp=m;
    ma=n;
    }
    for(int i=0;i<9;i++)
    {
    cout<<"Enter The Num : ";
    cin>>n;
        if(ma<n)
        {
            temp=ma;
            ma=n;
        }
        else if(temp<n && n<ma)
        {
            temp=n;
        }
    }
    cout<<"Second Mix : "<<temp;
}

