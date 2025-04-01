//print the path in maze
#include<bits/stdc++.h>
using namespace std;
void solve(int rs,int cs,int re,int ce,string s)
{
    if(rs>re || cs>ce)
    return ;
    else if(rs==re && cs==ce)
   { 
        cout<<s<<endl;
        return; 
   }
   else
    {
        solve(rs+1,cs,re,ce,s+'D');
        solve(rs,cs+1,re,ce,s+'R');
    }
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            string s="";
            solve(0,0,1,2,"");


return 0;
}

