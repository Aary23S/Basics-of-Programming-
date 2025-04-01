//pallindrom
#include<iostream>
using namespace std;
int main()
{
    int no,temp,x,sum=0;
    cout<<"\nEnter the no : ";
    cin>>no;
    temp=no;
    while(no>0)
    {
        x=no%10;
        sum=(sum*10)+x;
        no=no/10;
    }
    if(temp==sum)
    cout<<"\nthe no is pallindrom ";
    else
    cout<<"\nthe no is not pallindrom ";

return 0;
}