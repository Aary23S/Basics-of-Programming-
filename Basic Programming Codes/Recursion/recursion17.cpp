//find the number of steps required to make number into 0
#include<bits/stdc++.h>
using namespace std;
int count(int n,int cnt)
{
    if(n==0) return cnt;
    else
    {
        if(n%2==0) 
        {
            cnt++;
            return count(n/2,cnt);
        }
        else if(n%2==1)
        {
            cnt++;
            return count(n-1,cnt);
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n,cnt=0;
            cin>>n;
            int c=count(n,cnt);
            cout<<c<<"\n";



return 0;
}
