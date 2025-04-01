//printing the pattern 4
/* 
9
99
999
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        cout<<"\n ";
        for(j=0;j<i;j++)
        {
            cout<<" 9";
        }
    }

    return 0;
}