//first non reparting number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    
    int n,c=0,i;
    for(int i=0;i<6;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    n=v.size();
    vector<int> temp(n,0);
    for(i=0;i<n;i++)
    {
        if(v[i]==v[i+1])
        {
            temp[i]=temp[i+1]=1;
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(temp[i]!=1)
        {
            cout<<"\nThe no is :"<<v[i];
        break;
        }
       
    }
    
    return 0;
}