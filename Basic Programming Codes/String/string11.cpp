// check panagram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str="thequickbrownfoxjumpsoverthelazydog";
    set<char>st;
    for(int i=0;i<str.size();i++)
    {
        st.insert(str[i]);
    }
    bool ans=true;
    char ch='a';
    while(ch<='z')
    {
        if(st.find(ch)==st.end())
        {
            ans=false;
            break;
        }
        ch++;
    }
    if(ans==false)
    cout<<"Not Panagram"<<"\n";
    else cout<<"Panagram"<<"\n";
    return 0;
}
