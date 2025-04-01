//sum of the odd no
#include<iostream>
using namespace std;
int main()
{
    int no,i;
    int sum=0;
    for(i=1;i<=50;i++)
    {
        
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    cout<<"\nThe sum of the odd no is : "<<sum;

    return 0;
}