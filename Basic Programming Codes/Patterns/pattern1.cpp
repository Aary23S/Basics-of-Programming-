//pattern printing 1 
/*
*****
*****
***** */
#include<iostream>
using namespace std;
int main()
{
        int i,j,x,y;
        cout<<"\nEnter the no of rows and coloums ";
        cin>>x>>y;
        for(i=0;i<x;i++)
        {
            cout<<"\n ";
            for(j=0;j<y;j++)
            {
                cout<<" * ";
            }
        }


    return 0;
}