//calculate the sum of all the elements 
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,sum=0,n;
    cout<<"\nEnter the size";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"\nThe sum of the all no in array is : "<<sum;
    return 0;
}