//find the unique number in the array 
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            vector<int>v={3,3,7,7,10,11,11};//3 3 7 7 10 10 11 11 12
            map<int,int>mp;
            for(int i=0;i<v.size();i++)
            {
                mp[v[i]]++;
            }
            for(auto it:mp)
            {
                if(it.second!=2)
                {
                    cout<<it.first<<"\n";
                    break;
                }
            }



return 0;
}
*/

//find the unique number in aray by using the binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        vector<int>v={3,3,7,7,10,10,11,11,70};
        int n=v.size();
        int l,r,m,idx;
        l=0,r=n-1,m=(l+r)/2;
        bool ans=false;
        while(l<=r)
        {
            if(v[m]!=v[m-1] && v[m]!=v[m+1])
            {
                    cout<<v[m]<<"\n";
                    break;
            }
            else if(m%2==1)
            {
                if(v[m]==v[m-1])
                {
                    l=m+1;
                    m=(r+l)/2;
                }
                else if(v[m]!=v[m-1])
                {
                    r=m-1;
                    m=(r+l)/2;
                }
            }
            else if(m%2==0)
            {
                if(v[m]==v[m+1])
                {
                    l=m+1;
                    m=(r+l)/2;
                }
                else
                {
                    r=m-1;
                    m=(r+l)/2;
                }
            }
        }

        



return 0;
}
