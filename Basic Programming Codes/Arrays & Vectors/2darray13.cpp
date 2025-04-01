//rotate the matrix by 90 in clock eise direction
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter the size of the matrix :";
    cin>>n;
    vector<vector<int>>V(n,vector<int>(n));
    for(int i=0;i<V.size();i++)
    {

        for(int j=0;j<V[i].size();j++)
        {
            cin>>V[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<V.size();i++)
    {
        
        for(int j=0;j<i;j++)
        {
            swap(V[i][j],V[j][i]);
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        
       
        reverse(V[i].begin(),V[i].end());
        
        cout<<endl;
    }
    cout<<"\nThe roteted matrix is :";
    for(int i=0;i<n;i++)
    {
        
        cout<<endl;
        for(int j=0;j<n;j++)
        {
                cout<<" "<<V[i][j];
        }
        cout<<endl;
    }   
        

    return 0;
}

//time complexity->O(2N)+O(N)=O(3N)