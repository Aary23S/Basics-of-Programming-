//printing the paterns
/*
      *
    * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0;
    for(i=1;i<5;i++)
    {
        cout<<" \n ";
        for(j=1;j<5-i;j++)
        {
            cout<<"   ";
        }
        for(k=0;k<(2*i)-1;k++)
        {
        cout<<"   *  ";
        }
        cout<<" \n ";
    }
    return 0;
}
