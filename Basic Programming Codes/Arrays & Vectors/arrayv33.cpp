//prefix sum or running sum
#include<iostream>
#include<vector>
using namespace std;
void presum(int &v,int i,int n);
int main()
{
    ;
    vector<int>v(5);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];

    }
    int i=0;
    while(i<5)
    {
        if(i==0)
        {
            v[i]=v[i]+0;
        }
        else if(i>0)
        {
            v[i]=v[i]+v[i-1];
        }

    i++;
    }
    //presum(v,i,v.size());
    cout<<"\nThe array with prefix sum : ";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


}
    