//scalar multiplication
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j;
    int scalar;
    cout<<"\nEnter the scalar value : ";
    cin>>scalar;
    cout<<"\nEnter the numbers in the matrix : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    int b[3][3];
    cout<<"\nThe scalar multiplication is :";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=scalar*a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"  "<<b[i][j];
        }
        cout<<"\n";
    }


    return 0;
}