//checking the armstrong no
#include<iostream>
using namespace std;
int main()
{
    int no,temp,x,i,sum=0;
    cout<<"\nEnter the no : ";
    cin>>no;
    temp=no;
    while(no>0)
    {
        x=no%10;
        sum=sum+(x*x*x);
        no=no/10;

    } 
    if(temp==sum)
    cout<<"\nThe no "<< sum <<" is Armstrong " ;
    else
    cout<<"\nThe no "<< sum <<" is not Armstrong ";


return 0;
}
