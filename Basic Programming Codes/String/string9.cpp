// defanging the IP address
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    string temp="[.]";
    string ans=" ";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='.')
        {
            ans+=s[i];
        }
        else if(s[i]=='.')
        {
            ans+=temp;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
