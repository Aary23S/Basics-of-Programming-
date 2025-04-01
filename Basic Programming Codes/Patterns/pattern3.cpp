//printing pattern
/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        cout<<"\n ";
        for(j=0;j<i;j++)
        {
            cout<<" * ";
        }
    }

    return 0;
}