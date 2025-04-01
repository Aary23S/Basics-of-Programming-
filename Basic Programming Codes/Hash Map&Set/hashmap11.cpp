//check if the given character in presasent in the given word
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        long long test;
        cin>>test;
            string s="codeforces";
            unordered_set<char>st;
            for(int i=0;i<s.size();i++)
            {
                st.insert(s[i]);
            }
        while(test--)
        {
            
            char ch;
            cin>>ch;
            if(st.find(ch)!=st.end())
            cout<<"Yes"<<"\n";
            else
            cout<<"No"<<"\n";

            
        
        }



return 0;
}

