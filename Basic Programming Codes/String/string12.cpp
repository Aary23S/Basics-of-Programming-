// sort the string in with respect to the vowel
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s="leetcode";
    string temp="";
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            
            int idx=s[i]-'a';
            lower[idx]++;
            temp+=s[i];
            s[i]='#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            int idx=s[i]-'A';
            upper[idx]++;
            temp+=s[i];
            s[i]='#';
        }
    }
    sort(temp.begin(),temp.end());
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            s[i]=temp[j];
            j++;
        }
    }
    cout<<s<<"\n";
    return 0;
}
