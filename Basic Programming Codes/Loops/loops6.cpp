//print factorial 
#include<iostream>
using namespace std;
int main()
{
    int no,i,mul=1;
    cout<<"\nEnter the no : ";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        mul=mul*i;
    }
    cout<<"\nthe factorial of "<<no <<" is = " <<mul;

    return 0;
}