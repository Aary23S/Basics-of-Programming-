//printing the inverse pattern
//printing pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"\nEnter the no of the rows : ";
    cin>>r;
    for(i=1;i<r;i++)
    {
        if(i<=4)
    {
        for(j=1;j<=9;j++)
        {
            if(i+j==5)
            cout<<" * ";
            else if(j-i==3)
            cout<<" * ";
            else
            cout<<"  ";
        }
        cout<<"\n";
    }
        else
        {
           for(j=1;j<=9;j++)
           {
            if(i-j==3)
            cout<<" * ";
            else if(i+j==11)
            cout<<" * ";
            else
            cout<<"  ";
           } 
           cout<<"\n";
        }
    
    }


    return 0;
}
