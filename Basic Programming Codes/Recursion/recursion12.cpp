//stairs path problem
#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==1||n==2)
    return n;
    else if(n==3)
    return n+1;
    else
    return solve(n-1)+solve(n-2)+solve(n-3);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n;
            cin>>n;
            int x=solve(n);
            cout<<x<<endl;

return 0;
}
