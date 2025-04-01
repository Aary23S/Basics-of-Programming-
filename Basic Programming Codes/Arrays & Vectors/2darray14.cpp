//spiral elements 
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
        int left=0;
        int right=m-1;
        int top=0;
        int bottom=n-1;
        int dir=0;   
        while(left<=right && top<=bottom)
        {
            if(dir==0)//moving right to left
            {
                for(int i=left;i<=right;i++)//first row is sationary 
                {
                    cout<<V[top][i]<<" ";
                }
               // cout<<endl;
                top++;
            }
            else if (dir==1)
            {
                for(int i=top;i<=bottom;i++)//last col is sationary
                {
                    cout<<V[i][right]<<" ";
                } 
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)//last row is sationary 
                {
                    cout<<V[bottom][i]<<" ";
                }
                bottom--;
            }
            else 
            {
                for(int i=bottom;i>=top;i--)//first col is sationary
                {
                    cout<<V[i][left]<<" ";
                } 
                left++ ;
            }
            dir=(dir+1)%4;//changing direction of movement after printing a row or column.
        }    
            


    return 0;  
}