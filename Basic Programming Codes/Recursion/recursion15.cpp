//find the sum of the digits of given positive number
#include<bits/stdc++.h>
using namespace std;
int sod(int n,int sum)
{
    if(n==0)
        return sum;
    else
    {
        sum+=n%10;
        return sod(n/10,sum);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
        int n,sum=0;
        cin>>n;
        int x=sod(n,sum);
        cout<<x<<"\n";


return 0;
}
