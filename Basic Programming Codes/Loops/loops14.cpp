//addition of the first 3 and last 3 no
#include<iostream>
using namespace std;
int main()
{
    int c=0,no,i,sum=0;
    float avg;
    cout<<"\nEnter the no : ";
    for(i=0;i<10;i++)
    {
        cin>>no;
        if(c<3 || c>6)
        {
            sum=sum+no;
            
        }
        c++;
    }
    avg=sum/6.0;
    cout<<"\nThe sum is : "<<sum;
    cout<<"\nThe average is : "<<avg;

    return 0;
}