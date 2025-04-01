//sum of minor diagonal elements 
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sum=0;
    cout<<"\nEnter the numbers :";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i!=j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<"\nThe sum is : "<<sum;


    return 0;
}