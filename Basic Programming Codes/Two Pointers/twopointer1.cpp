//two  pointers approch 
//TC-O(2N) SC-O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    int k;
    cin>>k;
    int sum=0,cnt=0;
    for(int left=0,right=0;right<n;right++)
    {
        sum+=v[right];

        while(sum>k)
        {
            sum-=v[left];
            left++;
        }
        cnt+=(right-left+1);
    }
    cout<<"\nThe number of the subarrays are :"<<cnt<<"\n";

return 0;
}
