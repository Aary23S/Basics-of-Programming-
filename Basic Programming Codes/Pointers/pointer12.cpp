//program to reverse an array by passing an array to functiion using pointer
#include<iostream>
using namespace std;
void reverse (int *ptr,int n);
int main()
{
    int arr[5]={2,4,3,5,6};
    int *pa;//poinnter variable
    pa=&arr[0];//storing the address of the arr(0) to pa
    reverse(pa,5);//passing the address and 5


    return 0;
} 
    void reverse (int *ptr,int n)//reciving the num at address and 5
    {
        int temp[5],i;
        for(i=4;i>=0;i--)
        {
            temp[i]=*ptr;//storing the value at ptr address to temp
            *ptr++;
        }
        cout<<"\nthe reverse order is : ";
        for(i=0;i<5;i++)
        {
            cout<<"\n"<<temp[i];
        }

    }