//longest comman prefix string 
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    vector<string> str={"antham","anti","ant","apple","add"};
    /*sort(input.begin(),input.end());
    string s1=input[0];
    string s2=input[input.size()-1];
    string temp;
    for(int i=0;i<=s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            temp.push_back(s1[i]);
        }
    }*/
    //cout<<"\nThe longest comman substring is :"<<temp;
    string s1=str[0];
    
    int length=s1.size();
    for(int i=1;i<str.size();i++)
    {
        int j=0;
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j])
        {
            j++;
        }   
        length=min(length,j);
    }
    string ans=s1.substr(0,length);
    cout<<ans<<endl;

    return 0;
}
