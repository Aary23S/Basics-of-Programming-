//find the permutations of the string having unique characters
#include<bits/stdc++.h>
using namespace std;
void solve(string str,string str1)
{
    if(str==""||str.size()==0)
    {
        cout<<str1<<"\n";
    }
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        string lstr=str.substr(0,i);
        string rstr=str.substr(i+1);
        return solve(lstr+rstr,str1+ch);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            string str="abc";
            string str1="";
            solve(str,str1);


return 0;
}
