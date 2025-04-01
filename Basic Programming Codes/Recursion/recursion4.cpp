//print the n to 1 numbers
#include<bits/stdc++.h>
using namespace std;
void printN(int n)
{
    if(n==1)
    cout<<n<<"\n";
    else
    {
        cout<<n<<"\n";
        printN(n-1);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
        int n;
        cin>>n;
        printN(n);


return 0;
}
