//minimum value in array
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,min,temp,j;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];     
    }
    min=arr[0];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)//2 3 1 4 5
        {
            if(arr[j]<min)
            {
                temp=arr[j];
                arr[j]=min;
                min=temp;
            }
        }
    }
    cout<<"\nThe minimum no is : "<<min;
    return 0;
}