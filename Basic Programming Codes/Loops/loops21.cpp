//count the no of digits
#include<iostream>
using namespace std;
int main()
{
        int i,j,c=0,no;
        cout<<"\nEnter the no : ";
        cin>>no;
        while(no>0)
        {
            
            int x=no%10;
            c++;
            int sum=sum+x;
            no=no/10;
        }
        cout<<"\nThe no of digits : "<< c;

    return 0;
}