//find the subarray of the given array
//brute force approch-O(n3)
/*#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            cout<<v[k]<<" ";
        cout<<endl;
        }
        cout<<endl;
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            vector<int>v={1,2,3};
            int n=v.size();
            solve(v,n);



return 0;
}
*/

//optmise approch
//find the subset of the array
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(vector<ll>&v,ll i,ll n,vector<ll> ans)
{      
      
      if(i==n)
      {
            for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<"  ";
            
            cout<<"\n";
      }
      else{
            solve(v,i+1,n,ans);
            if(ans.size()==0 || ans[ans.size()-1]==v[i-1])
            {
            ans.push_back(v[i]);
            solve(v,i+1,n,ans);
            }
      } 
        
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            vector<ll>v={1,2,3};
            vector<ll>ans;
            //vector<ll>temp;
            solve(v,0,v.size(),ans);
            



return 0;
}
