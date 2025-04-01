//addition of the matrix 
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
        cout<<"\n";
    }
    int c[3][3];
    cout<<"\nAddition of the matrix : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"  "<<c[i][j];
        }
        cout<<"\n";
    }

    return 0;
}