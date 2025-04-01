#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0)
    return 0;
    else
    {
    cout<<"My name is aary"<<"\n";
    solve(n-1);
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            int n;
            cin>>n;
            solve(n);

return 0;
}
