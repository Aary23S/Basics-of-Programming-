//prefix suum matrix
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"\nEnter the size of the matrix :";
    cin>>n>>m;
    vector<vector<int>>V(n,vector<int>(m));
    cout<<"\nEnter the elements in vectors :";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>V[i][j];
        }                
        cout<<endl;

    }
    for(int i=0;i<n;i++)//prefix sum matrix in each row-> O(N*M)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
            {
                V[i][j]=V[i][j]+0;
            }
            else 
            {
                V[i][j]=V[i][j]+V[i][j-1];
            }
        }
    }

    int sum=0;
    int r1,c1,r2,c2;
    cout<<"\nGive the locations : ";//1 2 3 4           1  3 6  10
                                    //5 6 7 8           5 11 18 26
                                    //9 10 11 12        9 19 30 42
    cin>>r1>>c1>>r2>>c2;//r1=0 c1=0 r2=1 c2=2 24
    for(int i=r1;i<=r2;i++)//O(r1*c2)
    {
        for(int j=c2;j<=c2;j++)
        {
            if(r1==0 && c1==0)
            {
                sum=sum+(V[i][c2]);//0+6+18=24
            }
            else
            {
            sum=sum+(V[i][j]-V[i][c1-1]);//0+13+21=34
            }
        }
    }
    cout<<"\nPrefix Matrix Sum is :"<<sum<<endl;
    return 0;
}
//time complexity ->O(N*M +  (R2-R1)*(C2-C1)) = O((R2-R1)*(C2-C1))
/*
Input:
Enter number of rows and columns : 4 4
Enter elements of matrix : 0 6 18 24
                          0 13 21 34
                          9 19 30 42
                          0 5 7 8
Output:
Prefix Matrix Sum is : 24       */