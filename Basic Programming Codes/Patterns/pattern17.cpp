//printing pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"\nEnter the no of the rows : ";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==j)
            cout<<" * ";
            else if(i+j==10)
            cout<<" * ";
            else
            cout<<"  ";
        }
        cout<<"\n";
    }


    return 0;
}
