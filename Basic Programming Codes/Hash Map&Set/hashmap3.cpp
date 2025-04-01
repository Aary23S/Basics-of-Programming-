//example of usage of the HashSet
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int size,q;
    cin>>size>>q;
    set<int> s;
    vector<int>v(size);
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    for(int i=0;i<q;i++)
    {
        int n;
        cin>>n;
        if(s.find(n)!=s.end())
        cout<<"YES"<<endl;
        else
        cout<<"NO";
    }

    return 0;
}