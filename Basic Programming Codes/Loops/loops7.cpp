//checking the no is prime or not
#include<iostream>
using namespace std;
int main()
{
        int no,i,c=0;
        cout<<"\nEnter the no : ";
        cin>>no;
        for(i=1;i<=no;i++)
        {
            if(no%i==0)
            {
                c++;
            }
        }
        if(c==2)
        cout<<"\nThe no "<<no <<" is prime";
        else
        cout<<"\nThe no "<<no <<" is not a prime ";

    return 0;
}