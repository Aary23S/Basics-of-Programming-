//check two  matrix are equal or not
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,b[3][3],c=0;
    cout<<"\nValue 1 :";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nValue 2 :";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==b[i][j])
            {
                c++;
            }
        }
    }
    if(c==9)
    cout<<"\nBoth matrix are equal ";
    else
    cout<<"\nMatrix are not equal";

    return 0;
}