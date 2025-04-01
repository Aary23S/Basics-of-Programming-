//check the no is perfect or not
#include<iostream>
using namespace std;
int main()
{
    int no,i=1,x,sum=0;
    cout<<"\nEnter the no : ";
    cin>>no;
    while(i<no)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    
    i++;
    }
    if(no==sum)
    cout<<"\nThe no is perfect no : "<<no;
    else
    cout<<"\nThe no is not perfect no ";
    
return 0;
}