//search for the number in the array usinig recursion
/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(vector<ll>&v,ll l,ll r,ll x )
{
        if(l>r)
        return false;
        ll mid=(l+r)/2;
        if(l<=r)
        {
                    
            if(v[mid]==x)
            {
              return true;
            }  
            else if(v[mid]>x)
            {
                solve(v,l,mid-1,x);
            }
            else if(v[mid]<x)
            {
                solve(v,mid+1,r,x);
            }
        }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            ll n,x;
            cin>>n>>x;

            vector<ll>v(n);
            for(ll i=0;i<v.size();i++)
            cin>>v[i];

            sort(v.begin(),v.end());
            bool ans=solve(v,0,n-1,x);
            if(ans==true)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;   
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(vector<ll>v,ll l,ll r,ll x)
{
    if(l>r)
    return false;
    else if(l<=r)
    {
        if(v[l]==x)
        return true;
        else
        return solve(v,l+1,r,x);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            ll n,x;
            cin>>n>>x;
            vector<ll>v(n);
            for (ll i = 0; i < v.size(); i++)
            {
                cin>>v[i];
            }
            bool ans=solve(v,0,n,x);
            if(ans==true)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;



return 0;
}
