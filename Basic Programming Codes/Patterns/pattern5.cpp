//printing the pattten 5 
/*
999
99
9
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
            cout<<" 9 ";
        }
    }

    return 0;
}
