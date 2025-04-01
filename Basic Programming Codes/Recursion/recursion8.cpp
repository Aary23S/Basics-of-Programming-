//sum of the odd numbers 
#include<bits/stdc++.h>
using namespace std;
int sumOfOdd(int a,int b)
{
    if(a>b)
    return 0;
    else
    {
        if(a%2==1)
        return a+sumOfOdd(a+1,b);
        else
        return sumOfOdd(a+1,b);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            int a,b;
            cin>>a>>b;
            int sum=sumOfOdd(a,b);
            cout<<sum<<"\n";
return 0;
}
