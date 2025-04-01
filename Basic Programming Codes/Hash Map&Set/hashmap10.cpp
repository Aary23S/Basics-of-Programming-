//finding the pairs from the arrays whose difference is equal to the K
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v={0,-1,2,-3,1};//4 x-y=4//x=4+y//x=4+0=4//x=4+1=5//x=4+2=6//
                                //x=4-3=1-->1-(-3)<1,-3>//x=4-1=3
    int k;
    cin>>k;
    unordered_map<int,int>uset;
    for(int i=0;i<v.size();i++)
    {
        uset[v[i]]++;
    }
    //bool ans=false;
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        int sum=k+v[i];
        if(uset.find(sum)!=uset.end())
        {
            //ans=true;
            cnt++;
            cout<<"("<<sum<<","<<v[i]<<")"<<"\n";
        }
        
    }
  
    cout<<"Count :"<<cnt<<"\n";
   



    return 0;
}   