//find the count of the subarrays with sum==k

//Brute Force Approch 
//TC->O(n2) SC->O(1)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int>v={3,1,2,1,5};
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        int sum=v[i];
        for(int j=i+1;j<v.size();j++)
        {
            sum+=v[j];
            if(sum==k)
            cnt++;
        }
    }
    cout<<"\nThe count of subarray is :"<<cnt<<"\n";

return 0;
}*/

//Optimal Approch IMP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,presum=0,diff;
    vector<int>v={1,2,3,-3,1,1,1,4,2,-3};
    unordered_map<int,int>map;
    int k=3;
    map[0]=1;//insert 0 with its freq 1 in map
    for(int i=0;i<v.size();i++)
    {
        presum=presum+v[i];
        diff=presum-k;
        if(map.find(diff)!=map.end())
        {
            cnt+=map[diff];
        }
        map[presum]++;
    }
    cout<<cnt<<"\n";
    
    
    return 0;
} 