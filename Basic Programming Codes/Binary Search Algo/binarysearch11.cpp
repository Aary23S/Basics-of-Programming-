//binnary search in the 2D array
#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int l,int r,vector<vector<int>>&v,int k,int i)
{
    int x;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(v[i][mid]==k)
        return mid;
        else if(v[i][mid]<k)
        l=mid+1;
        else if(v[i][mid]>k)
        r=mid-1;
    }
  return -1; 
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
                
                int n,m,l,r,ans;
                cin>>n>>m;
                vector<vector<int>>v(n,vector<int>(m));
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        cin>>v[i][j];
                    }
                    cout<<"\n";
                }
                int k,i=0,j=m-1;
                cin>>k;
                while(i<n)
                {
                        if(v[i][j]<=k)
                        {
                                 
                                 ans=BinarySearch(0,j,v,k,i);
                                 if(ans!=-1)
                                 {
                                 cout<<"at row :"<<i<<" at col :"<<ans<<" as "<<v[i][ans];
                                 break;                     
                                 }
                        }
                        
                i++;
                }
               
return 0;
}
