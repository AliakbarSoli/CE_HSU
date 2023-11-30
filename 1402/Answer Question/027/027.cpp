#include<iostream>
using namespace std;
int main()
{
    int n=0;
    for(int i=100;i<1000;i++)
    {
        n=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                n++;
            }
        }
        if(n==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
    }
