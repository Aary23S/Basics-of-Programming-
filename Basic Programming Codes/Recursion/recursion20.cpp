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
            ans.push_back(v[i]);
            solve(v,i+1,n,ans);
      } 
        
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            vector<ll>v={2,3};
            vector<ll>ans;
            //vector<ll>temp;
            solve(v,0,v.size(),ans);
            



return 0;
}
