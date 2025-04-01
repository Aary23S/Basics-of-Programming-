//find the first occurance of the True
//TC->O(logN) SC->O(1)
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

        sort(v.begin(),v.end());
        int fo;
        int left=0,right=n-1;
        int mid=(left+right)/2;
        while(left<=right)
        {
            if(v[mid]==1)
            {
                fo=mid;
                right=mid-1;
                mid=(left+right)/2;
            }
            else
            {
                left=mid+1;
                mid=(left+right)/2;
            }
        }
        cout<<"1st occurance is :"<<fo<<"\n";

return 0;
}
