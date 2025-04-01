//a raise to b
#include<iostream>
using namespace std;
int main()
{
    int i,a,b,mul=1;
    cout<<"\nEnter the value of a : ";
    cin>>a;
    cout<<"\nEnter the value of b : ";
    cin>>b;
    for(i=1;i<=b;i++)
    {
        mul=mul*a;
    }
    cout<<"\nThe a raise to power b is : "<< mul;

    return 0;
}