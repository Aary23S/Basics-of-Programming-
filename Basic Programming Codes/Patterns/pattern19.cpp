//printg the pattern 
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
        if(i<5)
        {
        for(j=1;j<=11;j++)
        {
            if(j==5)
            cout<<" * ";
            else if(i+j==6 || j-i==4)
            cout<<" * ";
            else
            cout<<"   ";
        }
        cout<<"\n";
        }
            else if(i==5)
            {
                for(j=1;j<10;j++)
                {
                    cout<<" * ";
                }
            cout<<"\n";
            }
                else if(i>5)
                {
                    for(j=1;j<9;j++)
                    {
                        if(j==5)
                        cout<<" * ";
                        else if(i-j==4 || i+j==14)
                        cout<<" * ";
                        else
                        cout<<"   ";
                    }
                cout<<"\n";
                }
    }


    return 0;
}
