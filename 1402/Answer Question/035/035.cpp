#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    int x[100];
    for(int i=0;i<100;i++)
    {
        cin>>x[i];
        if(x[i]%2==0)
        {
            a++;
            b=1;
        }
    }

    if(b!=1)
    {
        cout<<"Numers Arent Odd!!";
    }
    else
    {
        cout<<"Numers Odd : "<<a;
    }
}
