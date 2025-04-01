//sum of the series 1-2+3-4+...n
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"\nEnter the value of n : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum-i;
        else
        sum=sum+i;
    }
    cout<<"\nThe sum of the series is : "<< sum;

    return 0;
}