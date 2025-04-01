//matrix multiplication 
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sum=0,b[3][3],mul[3][3],k;
    cout<<"\nEnter the elements in 1st array :";
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nEnter the elements in 2nd array : ";
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }
    cout<<"\nMatrix multiplication is : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            mul[i][j]=sum;
        }
    
    }
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
        {
            cout<<mul[i][j];
        }
        cout<<"\n";
    }
    return 0;
}