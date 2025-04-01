//terms of the given even no
#include<iostream>
using namespace std;
int main()
{
    int no,i,mul,c=0;
    cout<<"\nEnter the even no only : ";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            cout<<"\n "<<i;
        }

    }



    return 0;
}