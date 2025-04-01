//finding the peak number in the mountain array
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v,int l,int r)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m-1]<=v[m] && v[m]>=v[m+1])
        return m;
        else if(v[m-1]<v[m])
        {
            l=m+1;
        }
        else if(v[m]>v[m+1])
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

            vector<int>v={1,2,3,4,5,6,3,2,1,0};
            int left=0,right=v.size()-1;
            int ans=solve(v,left,right);
            cout<<ans<<" "<<v[ans]<<"\n";

return 0;
}
