//CF Div-4 : check if the user pass the candy at (1,1) in graph
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

    long long test;
    cin>>test;
    while(test--)
    {
        long long n;
        cin>>n;
        vector<char> s(n);
       
        unordered_map<char,int>map;
        for(int i=0;i<s.size();i++)
        {
            cin>>s[i];
            map[s[i]]++;
        }
        long long x=0,y=0;
        bool ans=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='U')
            x++;
            else if(s[i]=='D')
            x--;
            else if(s[i]=='R')
            y++;
            else if(s[i]=='L')
            y--;
           

            if(x==1 && y==1)
            {
                
                ans=true;
                //break;
            }
            //else cout<<"No"<<"\n";

        }
        if(ans==true)   cout<<"Yes"<<"\n";
        else    cout<<"No"<<"\n";   
    }


return 0;
}
