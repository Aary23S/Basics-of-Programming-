//print the A raised to the power B
#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b==0)
    return 1;
    else
    {
        return a*power(a,b-1);
    }

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int a,b;
            cin>>a>>b;
            int po=power(a,b);
            cout<<po<<"\n";


return 0;
}
