//counting the no of the digits
#include<iostream>
using namespace std;
int main()
{
    int no,x,sum=0,c=0;
    cout<<"\nEnter the no : ";
    cin>>no;
    while(no>0)
    {
        c++;
        x=no%10;
        sum=sum+x;
        no=no/10;

    }
    cout<<"\nThe no of the digits is : "<< c++;

    return 0;
}