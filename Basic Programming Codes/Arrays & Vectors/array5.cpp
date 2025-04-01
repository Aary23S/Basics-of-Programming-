//product of all elements in array
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,mul=1;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Product of all elements is: ";
    for(i=0;i<5;i++)
    {
        mul*=arr[i];
    }
    cout<<"\nThe product is :"<<mul;

    return 0;
}