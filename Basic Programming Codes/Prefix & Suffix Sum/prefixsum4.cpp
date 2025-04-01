//find the count of the max and min of the longest and shortest subarrays
//MIMP

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>v={1,2,3,1,1,1,1,4,2,3,3};
    unordered_map<long long,int>map;
    int k=3;
    int len=0,n=0,sum=0,diff,len1=INT16_MAX,n1=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        diff=sum-k;
        if(sum==k) n=max(n,i+1);    //if the sum and the K are already same then it itself is the subarray
        else
        {
            if(map.find(diff)!=map.end())
            {
                len=i-map[diff];//current idx of the prefixsum - idx of its previous prefixsum to get length of subarray
                n=max(len,n);
                n1=min(len1,len);
            }

        }
        if(map.find(sum)==map.end())//checking if the prefixsum is previously exsisted at specific idx or not 
        {
            map[sum]=i;
        }
    }
    cout<<"The largest subarray legth :"<<n<<"\n";
    cout<<"The smallest subarray legth :"<<n1<<"\n";
    int cntmax=0,cntmin=0;
    int wsum=0;
    int i=0;
    
        if(n1==0)
        cout<<"Max subarrays with longest lgt : 0"<<"\n";
        for(int i=0;i<n1;i++)
        wsum+=v[i];//for the first n elements

        if(wsum==k)
        cntmin++;

        for(int i=n1;i<v.size();i++)//for rest of the size-n numbers we have to add the next number 
        //and subtarct the first one to make it fix into the window of the n
        {
            wsum=wsum+v[i]-v[i-n1];
            if(wsum==k)
            cntmin++;
        }
            
    //cout<<"Max subarrays with longest lgt :"<<cntmax<<"\n";
    cout<<"Min subarrays with shortest lgt :"<<cntmin<<"\n";
return 0;
}
