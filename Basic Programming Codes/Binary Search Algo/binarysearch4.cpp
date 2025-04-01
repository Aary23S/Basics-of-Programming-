//upper bound of a numbe X
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        vector<int>v={200,300,400,450,500,550,700,800,850};//450>500//700>550 550<=550
        int x;
        cin>>x;
        sort(v.begin(),v.end());
        int left=0,right=v.size()-1,idx;
        int mid=(left+right)/2;
        while(left<=right)
        {
                
                if(v[mid]>x)
                {
                    if(v[mid-1]>x)
                    {
                        right=mid-1;
                        mid=(right+left)/2;

                    }
                    else if(v[mid-1]<=x)
                    {
                        idx=mid;
                        //break;
                    }
                }
                else
                {
                    left=mid+1;
                    mid=(right+left)/2;
                }
        }
        cout<<"The upper bound is :"<<idx<<"\n";

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

        vector<int>v={200,300,400,450,500,550,700,800,850};
        int x;
        cin>>x;
        sort(v.begin(),v.end());           
        auto it=upper_bound(v.begin(),v.end(),x);
        //auto k=it-v.begin();
        //int idx=k;
        cout<<"The idx is :"<<distance(v.begin(),it)<<"\n";


return 0;
}
