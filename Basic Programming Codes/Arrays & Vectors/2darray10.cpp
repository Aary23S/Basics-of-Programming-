//lower traingular matrix
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,c=0;
    cout<<"\nEnter the numbers in array : ";
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
            if(i==j==1)
            {
                c++;
            }

        }
    }
    if(c==3)
    {
        for(i=0;i<2;i++)
        {
            for(j=2;j>i;j--)
            {
                if(a[i][j])
                {
                    cout<<"  "<<a[i][j];
                }
            }
        }

    }
    return 0;
}