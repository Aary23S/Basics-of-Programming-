//factorail of the given nymber 
#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    else 
    {
        return n*factorial(n-1);
    }


}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        int n;
        cin>>n;
        int x;
        x=factorial(n);
        cout<<x<<"\n";
return 0;
}
