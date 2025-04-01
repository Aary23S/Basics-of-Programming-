// //first occurance of the number K
// #include<bits/stdc++.h>
// using namespace std;
// int solve(vector<int>&v,int l,int r,int k)
// {
    
//     if(l>r) return -1;
//     int mid=(l+r)/2,x;     
    
//             if(v[mid]==k )
//             {
//                 if(v[mid-1]==k)
//                 {
               
//                 return solve(v,l,mid-1,k);
//                 }
//                 else
//                 {
//                      return mid;
//                 }
//             }
//             else if(v[mid]>k)
//             {
//                 return      solve(v,l,mid-1,k);
//             }
//             else if(v[mid]<k)
//             {
//                 return solve(v,mid+1,r,k);
//             }
        
    

// }
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);

//             vector<int>v={2,2,5,5,6,6,8,9,9,9};
//             int k=5;
//             int n=v.size();
//             int l=0,r=n-1;
//             int ans=solve(v,l,r,k);
//             cout<<ans<<"\n";
// return 0;
// }
//----------------------------------------------------------------------------
//find the square root of m and round it off
#include<bits/stdc++.h>
using namespace std;

int solve(int m,int l,int r)
{
        int ans;
        while(l<=r)
        {//1 2 3 4 5 6 7
        int mid=(l+r)/2;
        int temp=mid*mid;
        
        if(temp<=m)
        {
            ans=mid;
            l=mid;  
        }
        else if(temp>m)
        {
            r=mid;
        }
      }
return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin >> m;
    int l = 1, r = m;
    int ans = solve(m, l, r);
    cout << ans << "\n";
    return 0;
}