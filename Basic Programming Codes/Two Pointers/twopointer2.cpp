#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long test;
    cin >> test;
    while(test--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<a.size();i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long i=0,j=0;
        long long sum=0,maxi=0;
        while(j<n)
        {
            if(a[j]-a[i]<=1 && sum+a[j]<=k)
            {
                sum=sum+a[j];
                j++;
            }
            else if(a[j]-a[i]<=1 && sum+a[j]>k)
            {
                sum=sum-a[i];
                i++;
            }
            else
            {
                sum=sum-a[i];
                i++;
            }
            maxi=max(maxi,sum);
        }

         cout<<maxi<<"\n";
    }
   
    return 0;
}
