//printing pattern 12
/*
15 14 13..
10 9 8 7..
6 5 4..
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k=15;
    for(i=5;i>0;i--)
    {
        cout<<" \n ";
        for(j=0;j<i;j++)
        {
            cout<<k;
            k=k-1;
        }
    }

    return 0;
}