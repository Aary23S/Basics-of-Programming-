//leap year or not 
#include<iostream>
using namespace std;
int main()
{
    int no,i;
    /*cout<<"\nEnter the year  : ";
    cin>>no;*/
    for(i=1;i<=2023;i++)
    {
        if(i%4==0)
        {
            cout<<"\n "<<i;
        }
    }

    return 0;
}