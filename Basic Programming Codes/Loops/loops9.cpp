//sum of the digits
#include<iostream>
using namespace std;
int main()
{
    int no,x,sum=0,no1;
    cout<<"\nEnter the no : ";
    cin>>no;
    no1=no;
    while(no>0)
    {
        x=no%10;
        sum=sum+x;
        no=no/10;
    }
    cout<<"\nThe sum of the digits of "<<no1 <<" is "<<sum;
    
    
    return 0;
}