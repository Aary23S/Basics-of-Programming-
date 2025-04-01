//sort teh string into lexiographic order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"\nEnter the string :";
    cin>>str;
    vector<int> freq(26,0);
    int j=0,idx;
    for(int i=0;i<str.length();i++)
    {
        idx=str[i]-'a';//idx=112-97=15 
        freq[idx]++;  //freq[15]=0 0++ 1
    }
     for(int i=0;i<str.length();i++)
     {
        while(freq[i]--)
        {
            str[j++]=i+'a';
            
            //freq[i]--;            //converting integer to char 'a'+i='a'+10='k'
        }
     }
     cout<<"\nthe string in ascending order is :"<<str;
    
    return 0;
}