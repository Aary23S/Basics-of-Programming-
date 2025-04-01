//find the number K in the sorted and rotated array
#include<bits/stdc++.h>
using namespace std;
 int solve(vector<int>&v,int l,int r,int m,int k);
int main()
{
    vector<int>v={4,5,6,7,8,0,1};
    int k;
    cin>>k;
    int l,r,m;
    l=0,r=v.size()-1;
    m=(l+r)/2;
    //main thing is to check if the v[mid] number lies in first increasing seq or second
    //4 5 6 7 8 0 1
    
    int ans=solve(v,l,r,m,k);
    cout<<ans<<"\n";
    return 0;
}
    int solve(vector<int>&v,int l,int r,int m,int k)
    {
        while(l<=r)
        {
        if(v[m]==k)//8 9 10 11 12 0 1 2 3 4 5 
        {
            return m;
        }
        else if(v[m]>=v[0])//it tells that there is an incresaing seq from o to m
        {
            if(k>v[m] || k<v[0])//it tells that if k is greater than max no of range[0,m] then 
            //certainly it dont lies in range[0,m] and if k is smaller than smallest number of range
            //then also it dont lies in the range.
            //it means it lies in the second incre seq range[m+1,n]
            {
                l=m+1;
                m=(l+r)/2;
            }
            else//it tells that either k>smallest number or k<greatest number of range[0,m]
            {
                 r=m-1;
                 m=(l+r)/2;
            }
        }
        else //it tells that number lies in second incre seq becz 2nd incresing seq will always has
        //smaller numbers than 1st increasing seq
        {
            if(k<v[m] || k>v[v.size()-1])//it tells that k lies in 1st incre seq
            {
                 r=m-1;
                 m=(l+r)/2;
            }
            else   
            {
                 l=m+1;
                 m=(l+r)/2;
            }
        }
        
    }
    return -1;
    }

