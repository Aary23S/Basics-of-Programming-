//find the 1st and the last occurance of the K
//tc->O(logN+logN) sc->O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            vector<int>v={7,8,7,5,8,8,10};//5 7 7 8 8 8 10
            sort(v.begin(),v.end());
            int k;
            cin>>k;
            int l=0,r=v.size()-1;
            int mid=(l+r)/2;
            int fo,lo;
            while(l<=r)
            {
                if(v[mid]==k)
                {
                    fo=mid;
                    r=mid-1;
                    mid=(r+l)/2;
                }
                else 
                {
                    if(v[mid]<k)
                    {
                        l=mid+1;
                        mid=(r+l)/2;
                    }
                    else if(v[mid]>k)
                    {
                        r=mid-1;
                        mid=(l+r)/2;
                    }
                }
            }
            cout<<"1st:"<<fo<<"\n";
            l=0,r=v.size(),mid=(l+r)/2;
            while(l<=r)//5 7 7 7 8 8 10
            {
                if(v[mid]==k)
                {
                    lo=mid;
                    l=mid+1;
                    mid=(r+l)/2;
                }
                else
                {
                   if(v[mid]<k)
                   {
                        l=mid+1;
                        mid=(l+r)/2;
                   }
                   else if(v[mid]>k)
                   {
                        r=mid-1;
                        mid=(l+r)/2;
                   }
                }

            }
            cout<<"2nd:"<<lo<<"\n";
return 0;
}
