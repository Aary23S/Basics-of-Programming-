//creating subarray/partiotion in array
#include<iostream>
#include<vector>
using namespace std;
int check(int prefixsum,int suffixsum,int tot);
void presum(vector<int> &v,int n,int tot);
int sufsum(vector<int> &v,int n,int j);
int main()
{
    vector<int>v(6);
    int i,tot=0;
    for(i=0;i<v.size();i++)
    {
        cin>>v[i];
        tot=tot+v[i];
    }
    presum(v,v.size(),tot);
    return 0;
}
    void presum(vector<int> &v,int n,int tot)
    {
        int i=0,sum=0,x;
        while(i<n)
        {
            int j=i+1;
            if(i==0)//prefix sum
            {
                v[i]=v[i]+0;
            }
            else if(i>0 && i<n)
            {
                v[i]=v[i]+v[i-1];
            }
            int suffixsum=sufsum(v,n,j);
            int prefixsum=v[i];
             x=check(prefixsum,suffixsum,tot);
            if(x==1)
            {
            cout<<"\nThe partition occurs at "<<i;
            }
            x=0;
        i++;
        }
        
    }
    int sufsum(vector<int> &v,int n,int j)
    {
        int sum1=v[n-1];//last value is added into sum
        while(j<n)//suffix sum
            {
                if(j<n-1)
                {
                    sum1=sum1+v[j];
                }

            j++;
            }
    return  sum1;
    }
    int check(int prefixsum,int suffixsum,int tot)
    {
        if(prefixsum+suffixsum==tot)
        {
            if(prefixsum==suffixsum)
            return 1;
            else
            return 0;
        }
       
        
    }