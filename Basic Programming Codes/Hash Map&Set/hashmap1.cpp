//find he frequency of the each number
/*
Brute Force Approch
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int size,q,cnt=0;
    cin>>size>>q;
    vector<int>v(size);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    while(q>0)
    {
        int n;
        cin>>n;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==n) cnt++;
        }
        cout<<n<<":"<<" "<<cnt;
        cnt=0;
    q--;
    }
return 0;
}*/

//optimmse with hasharray 
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int size,q;
    cin>>size>>q;
    vector<int>v(size);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    vector<int>hashArr(50,0);
    for(int i=0;i<q;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<v.size();j++)
        {
            if(v[j]==n)
            {
                hashArr[v[j]]++;
            }
        }
        cout<<n << ":"<<hashArr[n]<<"\n";
    }

    return 0;
}*/

//optimse with the hash map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int size,q;
    cin>>size>>q;
    unordered_map<int,int>hashMap;
    vector<int>v(size);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
        hashMap[v[i]]++;
    }
    for(int i=0;i<q;i++)
    {
        int n;
        cin>>n;
        cout<<n << ":"<<hashMap[n]<<"\n";
    }


    return 0;
}