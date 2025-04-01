//multiple peaks in the same array
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v,int l,int r)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m-1]<v[m] && v[m]>v[m+1])
        {
            return m;
        }
        else if(v[m-1]<v[m] && v[m]<v[m+1])
        {
            l=m+1;
        }
        else if(v[m-1]>v[m] && v[m]>v[m+1])
        {
            r=m-1;
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            vector<int>v={1,2,1,2,6,10,2,3};
            int l=0,r=v.size()-1;
            int ans=solve(v,l,r);
            cout<<ans<<" "<<v[ans]<<"\n";

return 0;
}

