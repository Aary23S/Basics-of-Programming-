//printing the pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            cout<<j;
            else
            cout<<"*";
        }
    cout<<" \n ";
    }
}