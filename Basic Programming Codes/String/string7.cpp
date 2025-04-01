//longst pallindrome string
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    string s="abaccb";
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int lgt=0;
    bool flag=true;
    for(auto it:mp)
    {
        if(it.second%2==0)
        {
            lgt+=it.second;
        }
        else if(it.second%2==1)
        {
            if(it.second==1 && flag==true)
            {
                flag=false;
                lgt+=it.second;
            }
            else
            {
                lgt+=(it.second/2)*2;
            }
        }
    }
    cout<<lgt<<"\n";


return 0;
}
