//given a positive integer return true if it is a power of 2 using recursion
#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
        if(n%2==1)
        cout<<"NO"<<"\n";
        else if(n%2==0 && n/2==1)
        cout<<"YES"<<"\n";
        else 
        return solve(n/2);

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

