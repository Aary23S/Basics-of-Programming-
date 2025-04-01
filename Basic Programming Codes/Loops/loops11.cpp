//reverse the no
#include<iostream>
using namespace std;
int main()
{
    int no,x,sum=0;
    cout<<"\nEnter the no : ";
    cin>>no;
    while(no>0)
    {
        x=no%10;
        sum=(sum*10)+x;
        no=no/10;
    }
    cout<<"\n The reverse of the no is  "<<sum ;

    return 0;
}