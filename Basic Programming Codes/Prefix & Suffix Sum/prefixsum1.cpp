//find sum from range l to r using prefix sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v={1,2,3,4,5,6};
    vector<int>t(v.size(),0);
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        t[i]=v[i];
        else if(i>0)
        {
            t[i]=v[i]+t[i-1];
        }
    }    
    for(int i=0;i<t.size();i++)
    cout<<t[i]<<" ";
    
    int l,r;
    cin>>l>>r;
    cout<<"\n";
    cout<<t[r-1]<<" "<<t[l-2]<<"\n";
    cout<<t[r-1]-t[l-2]<<"\n";


return 0;
}