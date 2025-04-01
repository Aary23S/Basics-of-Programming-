//find the freq of all the numbers and display the min and max freq among them


//Brute Force appproch
//TC-O(N2) SC-O(N)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v={3,2,3,2,4,3,4};
    vector<int>t;
    int i=0,j;
    int cnt;
    sort(v.begin(),v.end());//2 2 3 3 3 4
    while(i<v.size())
    {
        cnt=1;
        for( j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j])  cnt++;
            else if(v[i]!=v[j])
            {
                t.push_back(cnt);
                break;
            }
        }
    i=j;
    }
    t.push_back(cnt);//for the last single digit to count its freq

    for(int i=0;i<t.size();i++)
    cout<<t[i]<<" ";

    cout<<"\n";
    
    int max=*max_element(t.begin(),t.end());
    int min=*min_element(t.begin(),t.end());
    cout<<"max ele :"<<max<<"\n";
    cout<<"min ele :"<<min<<"\n";
    
    
    

    return 0;
}*/


//Optimise Approch using Hash Map
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v={2,3,3,2,3,4,4,2,2};
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    for(auto i:mp)
    {
        cout<<i.first<<"--->"<<i.second<<"\n";
    }
    int max=0,min=v.size();
    for(auto it:mp)
    {
        if(it.second>max) max=it.second;
        if(it.second<min) min=it.second;
    }
    cout<<"Max :"<<max<<"\n";
    cout<<"Min :"<<min<<"\n";

    return 0;
}