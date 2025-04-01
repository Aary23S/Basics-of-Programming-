//find the power of the number by using log method
#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b)
{
    if(b%2==0)
    {
        if(b==1)
            return a;
        else 
            return solve(a,b/2)*solve(a,b/2);
    }
    else
    {
        if(b==1)
            return a;

        return solve(a,b/2)*solve(a,b/2)*a;
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int a,b;
            cin>>a>>b;
            int x=solve(a,b);
            cout<<x<<" "<<"\n";

return 0;
}
