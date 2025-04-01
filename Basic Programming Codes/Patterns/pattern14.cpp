//printing the pattern 
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(j=1;j<=5;j++)
    {
        for(i=1;i<=5;i++)
        {
            cout<<i*j<<"  ";
        }
        cout<<"\n";
    }


    return 0;
}