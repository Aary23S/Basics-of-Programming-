//check that arr2 is subset of the arr1
//bute force approch
//TC->O(N*M)

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>arr1={2,4,7,1,5};//1 2 4 5 7
    vector<int>arr2={4,5,6};//2 4 5
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int cnt=0,j=0;
    for(int i=0;i<arr2.size();i++)
    {
        while(j<arr1.size())
        {
            if(arr2[i]==arr1[j])
            {
                cnt++;
                
                break;
            }
            //else    j++;
        j++;
        }
    }
    if(cnt==arr2.size())
    cout<<"YES"<<"\n"<<cnt;
    else    cout<<"NO"<<"\n"<<cnt;

return 0;
}*/

-----------------------------------------------------------------------------
//optimal approch by HashSet

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v1={2,4,7,1,5};//1 2 4 5 7
    vector<int>v2={2,7,1};//2 4 5 1 2
    unordered_set<int> uset;
    for(int i=0;i<v1.size();i++)
    {
        uset.insert(v1[i]);

    }
    bool ans=true;
    for(int i=0;i<v2.size();i++)
    {
        if(uset.find(v2[i])==uset.end())
        {
            ans=false;
            
        }
        else
        {
            ans=true;
        }
    }
    if(ans==false) cout<<"NO Subset"<<endl;
    else cout<<"YES Subset"<<endl;

return 0;
}