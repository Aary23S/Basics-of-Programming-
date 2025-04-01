//printing the pattern 
/*
    * * *
      *  
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=5;i>0;i--)
    {
        cout<<"\n";
        for(j=5;j>i;j--)
        {
            cout<<"  ";
        }
        for(k=0;k<2*i-1;k++)
        {
            cout<<"  *  ";
        }
        cout<<"\n";
    }
    
    
    return 0;
}