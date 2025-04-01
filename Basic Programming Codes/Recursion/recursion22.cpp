//print the increasing subsequences of the array
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(vector<ll>&v,ll i,ll n,vector<ll>ans,ll k)/*dont usse &ans becaz  we have to create seprate vectors as a subsequences. If we use & then it means we are storing it in the same vector ans*/
{
    if(i==n)
    {
        if(ans.size()==k)
        {
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }

            cout<<"\n";
        }
        return;
    }
    solve(v,i+1,n,ans,k);
    ans.push_back(v[i]);
    solve(v,i+1,n,ans,k);
//    if(ans.size()==0 || ans.back()<=v[i])
//     {
//         ans.push_back(v[i]);
//         solve(v,i+1,n,ans,k);
//         ans.pop_back();
//     }
//     solve(v,i+1,n,ans,k);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            vector<ll>v={1,2,3,4};
            ll n=v.size();
            vector<ll>ans;
            ll k;
            cin>>k;
            solve(v,0,n,ans,k);



return 0;
}
