//factorial of the given no
#include<iostream>
using namespace std;
int main()
{
    int i,no,mul=1;
    cout<<"\nEnter the no : ";
    cin>>no;
    for(i=no;i>=1;i--)
    {
        mul=mul*i;
    }
    cout<<"\nThe factorial of the given no is : "<< mul;

    return 0;
}