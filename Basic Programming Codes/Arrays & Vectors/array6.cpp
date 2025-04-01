//second largest element in array 
//by two pass
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,temp;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nThe second highest no is : "<<arr[3];    
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}