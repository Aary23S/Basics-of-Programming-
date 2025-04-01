//sum of the diagonal elements
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,sum=0;
    cout<<"\nThe elements in array :";
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    cout<<"\nThe sum of the diagonal elememts is : "<<sum;
    return 0;
}