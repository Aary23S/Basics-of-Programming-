//genrate all the binary substring without consecutive 1s
#include<bits/stdc++.h>
using namespace std;
void solve(string s,int n)
{
    if(s.size()-1==n)
    {
        cout<<s<<endl;
        return;
    }
    solve(s+'0',n);
    if(s=="" || s[s.length()-1]!='1')   solve(s+'1',n);
        

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n;
            cin>>n;
            string s=" ";
            solve(s,n);


return 0;
}
 