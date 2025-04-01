//printing the pattern 10
/*
0
12
345
6789
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int k=0;
    for(i=0;i<=5;i++)
    {
        cout<<" \n ";
        for(j=0;j<=i;j++)
        {
            cout<<k;
            k=k+1;
        }
        cout<<" \t ";
    }

   return 0;  
}
