//check the given strings are anangram or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    vector<int> freq1(26,0),freq2(26,0);
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"\nEnter second string: ";
    getline(cin,str2);
    //count the frequency of the characters
    for(int i=0;i<str1.length();i++)
    {
        int idx=str1[i]-'a';
        freq1[idx]++;
    }
    for(int i=0;i<str2.length();i++)
    {
        int idx1=str2[i]-'a';
        freq2[idx1]++;
    }
    bool isAnagram=true;
    //compare the two frequency arrays
    for(int i=0;i<26 && isAnagram;i++)
    {
        if(freq1[i]!=freq2[i])
            isAnagram=false;
    }
    if(isAnagram==false)
    cout<<"NO";
    else 
    cout<<"YES";

    return 0;
}