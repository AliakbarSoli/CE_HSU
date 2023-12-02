#include<iostream>
using namespace std;
int main()
{
    int mi=0,n;
    cout<<"Enter The Num : ";
    cin>>n;
    mi=n;
    for(int i=0;i<9;i++)
    {
    cout<<"Enter The Num : ";
    cin>>n;
        if(mi>n)
        {
            mi=n;
        }
    }
    cout<<"Min : "<<mi;
}
