#include<iostream>
using namespace std;
int main()
{
    int n;
    float grade,avg=0;
    cout<<"Number of Courses : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Grade Of Course : ";
        cin>>grade;
        avg+=grade;
    }
    cout<<"Student AVG : "<<avg/n;
}
