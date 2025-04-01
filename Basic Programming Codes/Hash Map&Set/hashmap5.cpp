//check if the arry is subset of another of another 
//if there are duplicate exist
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
     vector<int>v={6,7,3,2,2};
     vector<int>v1={6,7,3,2};
    
     unordered_map<int,int> umap;
    for(int i=0;i<v.size();i++)
    { 
        umap[v[i]]++;
    }    
     bool ans=true;
    for(int i=0;i<v1.size();i++)
    {
        if(umap[v1[i]]==0) ans=false;
        umap[v1[i]]--;
    }    
    
    if(ans==true) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
    return 0;
}