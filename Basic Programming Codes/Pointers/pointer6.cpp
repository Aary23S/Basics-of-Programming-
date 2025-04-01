//pointer arithmatic
#include<iostream>
using namespace std;
int main()
{
    int arr[2]={1,10};
    int *ptr;
    ptr=&arr[0];
    cout<<"\n"<<ptr<<"\n"<<*ptr;//1//ptr is for the add of arr[0] and *ptr is value stored in it (1)
    *ptr++;//ptr incremented first and then its dereference
    cout<<"\n"<<*ptr;//10
    ptr=&arr[0];
    (*ptr)++;//first defrefernce of the value at the add and then increment in address
    cout<<"\n"<<*ptr;//2
    ptr=&arr[0];
    *++ptr;//first increment in pointer then dereference of the value in it
    cout<<"\n"<<*ptr;//10
    ptr=&arr[0];
    ++(*ptr);//first dereference of the value then increment in that  value
    cout<<"\n"<<*ptr;//3

    return 0;
}