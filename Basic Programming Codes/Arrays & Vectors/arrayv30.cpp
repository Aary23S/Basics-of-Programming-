//two pointer 0s and 1s
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int>v;
    int i,c=0;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    // c=0;
    for(i=0;i<v.size();i++)// 0 1 0 1 0//1 0 1 0 1
    {
        if(v[i]==0)
        {
            c++;
        }
        
    }
    for(i=0;i<v.size();i++)
    {
        if(i<c)
        {
            v[i]=0;
        }
        else if(i>=c)
        {
            v[i]=1;
        }
    }
    
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}