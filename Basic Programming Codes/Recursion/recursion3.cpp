//sum of the first n numbers
#include<bits/stdc++.h>
using namespace std;
int sumOf(int n)
{
    if(n==0)
    return 0;
    else
    {
        return n+sumOf(n-1);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            int n;
            cin>>n;
            int x=sumOf(n);
            cout<<"sum is :"<<x<<"\n";


return 0;
}
