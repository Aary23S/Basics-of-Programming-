#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0 || n==1)
    return 1;
    else 
    return solve(n-1)+solve(n-2);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n;
            cin>>n;
            for(int i=0;i<n;i++)
            {
                int x=solve(i);
                cout<<x<<" ";
            }

return 0;
}

