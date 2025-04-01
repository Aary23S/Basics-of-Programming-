//find the max value out the given elem
//observation : when i=n-1 itretn happens then the arr[j] have 2nd largest value which is going to be comapre with max value for the last comparison 
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,j,max,temp;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)//2 3 1 4 5//3 2 1 4 5//4 2 1 3 5//5 2 1 3 4
        {
            if(arr[j]>max)//3>2 y//1>3 n//4>3 y//5>4 y
            {
                temp=arr[j];
                arr[j]=max;
                max=temp;     
            }
        }
    }
    //cout<<"\nThe maximum no is : "<<arr[4]; for 2nd highest no
    cout<<"\nThe maximum no is : "<<max;    
    

    
    
    return 0;
}