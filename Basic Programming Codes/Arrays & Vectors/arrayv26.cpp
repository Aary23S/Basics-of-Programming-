//array manupulation finding the unique element
//other elem are repeted twice
//for more than two repetetions we can use two pinter method in sorted vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v;
    int i,j;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(v[i]==v[i+1])
        {
            v[i]=v[i+1]=-1;
        }
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]!=-1)
        {
            cout<<"\n"<<v[i];
        }
    }
    return 0;
}