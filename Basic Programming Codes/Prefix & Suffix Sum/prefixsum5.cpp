//find sum from range l to r using prefix sum
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    vector<int>v={1,2,3,4,5,6};
    int l,r;
    cin>>l>>r;
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        v[i]=v[i];
        else
        {
            v[i]+=v[i-1];

        }
    }
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<"\n";
    sum=v[r]-v[l-1];
    cout<<"The sum from L to R is :"<<sum<<"\n";


return 0;
}
*/
//--------------------------------------------------------------------------------------------------

//find the count of the subarrays with sum==k
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    vector<int>v={3,1,2,1,5};
    unordered_map<int,int>map;
    int k;
    cin>>k;
    int cnt=0,sum=0,diff;
    map[0]=1;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
        diff=sum-k;
        if(map.find(diff)!=map.end())
        {
            cnt=cnt+map[diff];//cnt=0+map[0] cha count=>1->cnt=0+1=1
        }
        map[sum]++;
    }
    cout<<"The number of subarrays with sum k :"<<cnt<<"\n";


return 0;
}
*/
//--------------------------------------------------------------------------------------------------

//find the longest and the smallest subarray eqquals to the sum K
//find the count of the longest and smallest subarray with the sum k
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    vector<int>v={1,2,3,1,1,1,1,4,2,3};
    unordered_map<int,int>map;
    int k;
    cin>>k;
    int sum=0,diff;
    int maxi=0,mini=v.size(),lgt=0,size=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        diff=sum-k;
        if(sum==k)  {
            maxi=max(maxi,i+1);
            mini=min(mini,i+1);
        }
        if(map.find(diff)!=map.end())
        {
            size=i-map[diff];
            maxi=max(maxi,size);
            mini=min(mini,size);
        }
        if(map.find(sum)==map.end())
        map[sum]=i;
    }
    cout<<"Max :"<<maxi<<"\n";
    cout<<"Mini :"<<mini<<"\n";
    int maxcnt=0,mincnt=0,wsm=0;
    for(int i=0;i<maxi;i++)
    {
        wsm+=v[i];
    }    
    if(wsm==k)  maxcnt++;

    for(int i=maxi;i<v.size();i++)
    {
        wsm+=v[i];
        wsm-=v[i-maxi];
        if(wsm==k)  maxcnt++;
    }
    cout<<"The count of the longest subarray :"<<maxcnt<<"\n";


return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        long long sum=0,dif,cnt=0,temp=0;
        for(long long i=0;i<v.size();i++)
        {
            sum=sum+v[i];
            temp=max(temp,v[i]);
            if(sum-temp==temp)
            cnt++;
        }
        cout<<cnt<<"\n";
    }



return 0;
}
