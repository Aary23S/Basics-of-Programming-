//reverse the number 
#include<bits/stdc++.h>
using namespace std;
int reverseNo(int n,int rev)
{
    if(n==0)
    return rev;
    else
    {
        rev=(rev*10)+(n%10);
        return reverseNo(n/10,rev);
    }

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n,sum=0;
            cin>>n;
            int x=reverseNo(n,sum);
            cout<<x<<"\n";


return 0;
}
