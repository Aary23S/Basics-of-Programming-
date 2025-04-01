//WAP to take 5 no in an array and display the max no out of them using pointer
#include<iostream>
using namespace std;
int main()
/*
{
    int arr[5]={4,3,5,2,1};
    int *pa;
    pa=&arr[0];
    int i,max,temp;
    max=*pa;
    for(i=1;i<5;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    cout<<"\nThe max is : "<<max;


    return 0;
}
*/

{

    int arr[5]={4,3,5,8,1};
    int *pa;
    pa=&arr[0];
    int max,i;
    max=*pa;
    for(i=1;i<5;i++)
    {
        if(max<*pa)
        {
            max=*pa;
        
        }
        pa++;
    }
        cout<<"\n"<<max;


    return 0;
}