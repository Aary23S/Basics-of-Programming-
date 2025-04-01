//code forces 859-D Odd Queries
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        long long t;
        //cout<<"\nEnter the number of test cases :"<<"\n";        
        cin>>t;
        while(t--)  
        {
            long long n,q;
        //    cout<<"\nEnter the size & query :"<<"\n";
            cin>>n>>q;
            long long a[n];
            long long t[n];
            //unordered_map<long long,long long>map;
            long long sum=0,diff,sum1=0,temp;
        //    cout<<"\nEnter the num in array:"<<"\n";
            for(long long i=1;i<=n;i++)
            {
                cin>>a[i];
                sum+=a[i];

            }
            temp=sum;
        //    cout<<"\nThe total sum is:"<<sum<<"\n";
            for(int i=1;i<=n;i++)
            {
                if(i==1)
                t[i]=a[i];
                else
                {
                    t[i]=t[i-1]+a[i];
                }
                map[t[i]]++;
            }
            while(q--)
            {
                long long l,r,k;
        //        cout<<"\nEnter the l,r,k :";
                cin>>l>>r>>k;
                if(l==1)
                {
                    diff=t[r];
                    sum-=diff;
                    sum+=(r-l+1)*k;
                }
                else
                {
                    diff=t[r]-t[l-1];
                    sum-=diff;
                    sum+=(r-l+1)*k;
                }
        //        cout<<"\nThe new sum is :"<<sum<<"\n";
                if(sum%2!=0)    cout<<"YES"<<"\n";
                else cout<<"NO"<<"\n";
                sum=temp;
            }   

        }

return 0;
}
