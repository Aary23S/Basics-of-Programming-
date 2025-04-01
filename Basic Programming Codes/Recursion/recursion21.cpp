//find the subset of the given string
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
void solve(string str,string str1,map<string,ll>&mp)
{
    if(str.length()==0 || str=="")
    {
            //vs.push_back(str1);
            //cout<<str1<<"\n";
            mp[str1]++;
    }
    else
    {
        char ch=str[0];
        solve(str.substr(1),str1+ch,mp);
        solve(str.substr(1),str1,mp);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            string str="aab";
            string str1="";
            vector<string>vs;
            map<string,ll>mp;
            solve(str,str1,mp);
            for(auto it:mp)
            {
                cout<<it.first<<"\n";
            }

return 0;
}
*/
void solve(string str,string str1,vector<string>&vs,bool flag)
{
        if(str=="")
        {
            vs.push_back(str1);
            return;
        }
        
        
            char ch=str[0];
            if(str.length()==1)
            {
                if(flag==true)
                solve(str.substr(1),str1+ch,vs,true);
                
                solve(str.substr(1),str1,vs,true);
                
                return;
            }
            
            char ch1=str[1];
            if(ch==ch1)
            {
                if(flag==true)
                solve(str.substr(1),str1+ch,vs,true);
                
                solve(str.substr(1),str1,vs,false);
                
            }
            else
            {
                if(flag==true)
                solve(str.substr(1),str1+ch,vs,true);
                
                solve(str.substr(1),str1,vs,true);
                
            }
            
        
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            string str="aab";
            string str1="";
            vector<string>vs;
            solve(str,str1,vs,true);
            for(auto ele:vs)
            cout<<ele<<"\n";
return 0;
}