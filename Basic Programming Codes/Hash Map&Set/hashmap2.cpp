//find the frequency of the X queries
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int size,x;
    cin>>size>>x;
    unordered_map<int,int>unorderMap;
    vector<int>v(size);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
        unorderMap[v[i]]++;
    }
    for(int i=0;i<x;i++)
    {
        int n;
        cin>>n;
        cout<<unorderMap[n]<<endl;
    }

    return 0;
}