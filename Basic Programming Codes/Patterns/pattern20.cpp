//printing the pattern 
//printg the pattern 
//printing pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"\nEnter the no of the rows : ";
    cin>>r;
    for(i=1;i<=6;i++)
    {
        
        //for(j=1;j<=9;j++)
        
            if(i<3)
            {
                for(j=1;j<=9;j++)
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
            else if(i==3)
            {
                for(j=1;j<=9;j++)
                {
                if(j>=3 && j<=7)
                cout<<" * ";
                else
                cout<<"   ";
                }
            cout<<"\n";
            }
            
            else if(i==4)
            {
                for(j=1;j<=9;j++)
                {
                if(i+j==5 || i+j==8 || i+j==10 || i+j==13 )
                cout<<"   ";
                else
                cout<<" * ";
                }
            cout<<"\n";
            }
            //cout<<"\n";
            else if(i==5)
            {
                for(j=1;j<=9;j++)
                {
                if(i+j==7 || i+j==13)
                cout<<"   ";
                else
                cout<<" * ";
                }
            cout<<"\n";
            }
            //cout<<"\n";
            else if(i==6)
            {
                for(j=1;j<10;j++)
                {
                    cout<<" * ";
                }
            cout<<"\n";
            }
        

    }
    


    return 0;
}
