//book alloaction to the students,painter paints the wall in given days.
//TC-O(NlogN) SC-O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            
            vector<int>v={12,34,67,90};
            int k=2,ans;
            //cin>>k;
            int maxCap=*max_element(v.begin(),v.end());
            int totpge=0;
            for(int i=0;i<v.size();i++)
            {
                totpge+=v[i];
            }
            int l=maxCap,r=totpge,mid;
            while(l<=r)
            {
                mid=(l+r)/2;
                int count=1,page=0;
                for (int i = 0; i < v.size(); i++)
                {
                    page+=v[i];
                    if(page>mid)
                    {
                        count++;
                        page=v[i];
                    }
                }
                if(count<=k)
                {
                    ans=mid;
                    r=mid-1;
                }
                else 
                {
                    l=mid+1;
                }
            }
            cout<<"the minimum no is :"<<ans<<"\n";           


return 0;
}
