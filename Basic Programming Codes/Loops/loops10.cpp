//display the AP 1,3,5,7,9 upto n terms
#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=1,x=1;
    cout<<"\nEnter the nth no : ";
    cin>>n;
    //cout<<"\n "<<x;
    while(i<=n)
    {
       /* sum=sum+2;
        cout<<"\n "<<sum;*/
         sum=2*i-1;
         cout<<"\n "<<sum;
         i++;
    }
    
return 0;
}