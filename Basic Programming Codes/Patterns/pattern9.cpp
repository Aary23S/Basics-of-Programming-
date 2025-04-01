//pattern printing 9
/*
0
01
012
0123
*/
#include<iostream>
using namespace std;
int main()
{

    int i,j;
    for(i=0;i<5;i++)
    {
        cout<<" \n ";
        for(j=0;j<i+1;j++)
        {
            cout<< j ;
        }
    }
    
    
    return 0;
}