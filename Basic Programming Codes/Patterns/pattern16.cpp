//printing the pattern 
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<5;i++)
    {
        cout<<"  ";
        for(j=3;j>i;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            cout<<" * ";
        }
    cout<<"\n";
    }

    return 0;

}