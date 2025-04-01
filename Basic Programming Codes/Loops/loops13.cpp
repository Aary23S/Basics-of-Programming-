//average of the first 4 nos out of 4
#include<iostream>
using namespace std;
int main()
{
    int c=0,no,sum=0,i;
    cout<<"\nEnter the no : ";
    for(i=1;i<=10;i++)
    {
        cin>>no;
        if(c<4)
        {
            sum=sum+no;
            c++;
        }
    }   
    float avg;
    avg=sum/4.0;
    cout<<"\nThe sum  is : "<<sum;
    cout<<"\nThe average of the first four no is : "<<avg; 

return 0;
}