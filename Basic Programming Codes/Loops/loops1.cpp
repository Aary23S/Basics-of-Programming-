//sum of the first n natural no using while loop and for
#include<iostream>
using namespace std;
int main()
{
   /* 
    int i=1,n,sum=0;
    cout<<"\nEnter the no :";
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
       
        i++;
    }
     cout<<"\nSum of the first (n) no is = "<<sum;
    
    */
    int i,sum=0,n;
    cout<<"\nEnter the first n no : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        
       sum=sum+i;
    }
    cout<<"\nThe sum of the first n numbers = "<<sum;    


    return 0;
}