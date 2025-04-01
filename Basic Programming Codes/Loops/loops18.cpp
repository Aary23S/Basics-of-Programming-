//fibonice series
#include<iostream>
using namespace std;
int main()
{
    int no,x=0,y=1,i;
    cout<<"\nEnter the nth term of the series : ";
    cin>>no;
    cout<<"\n "<<x;
    cout<<"\n "<<y;
    for(i=1;i<(no/2);i++)
    {
        x=x+y;
        y=y+x;
        cout<<"\n "<<x;
        cout<<"\n "<<y;
    }
    if(no%2==1)
    x=x+y;
    cout<<"\n "<<x;

    return 0;
}