//string basics
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string st1,st4="satardekar";
    char st2;
    //cout<<"\nEnter the name :";
    //cin>>st1;
    //cout<<st1;//do not consier the blank space 
    cout<<"\nEnter your full name ";
    getline(cin,st1);//consider the balnk space
    cout<<st1<<endl;
    /*cout<<"\nEnter the name of the charater :";
    cin>>st2;
    cout<<int(st2);*/
    reverse(st1.begin(),st1.end());
    cout<<"\nReverse is :"<<st1;
    string st3=st1.substr(0,2);
    st1="aary";
    cout<<"\nSubstring  is :"<<st3;
    cout<<"the concatination is :"<<st1+st4;
return 0;
}