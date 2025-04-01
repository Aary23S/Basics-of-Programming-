// find the Nth root of the M => (M)^(1/N)
//(M)*(1/N)=x => [(M)^(1/N)]^N=(x)^N => M=(x)^N
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//  ios_base::sync_with_stdio(false);
//  cin.tie(0);
//  cout.tie(0);

//         double n,m;//3 27
//         cin>>n>>m;
// //        int a;
//         double l,r,mid;
//         l=1,r=m;
//         while(l<=r)
//         {
//             // mid=(l+r)/2;
//             // if(pow(mid,n)==m)
//             // {
//             //     cout<<mid<<"\n";
//             //   //  break;
//             // }
//             // else if(pow(mid,n)>m)
//             // {
//             //     r=mid-1;
//             // }
//             // else if(pow(mid,n)<m)
//             // {
//             //     l=mid+1;
//             // }
//             mid=(l+r)/2;
//             double x=pow(mid,n);
//             if(x==m)
//             {
//                 cout<<mid<<"\n";
//                 break;
//                 }
//                 else if(x>m)
//                 {
//                     r=mid-1;
//                     }
//                     else if(x<m)
//                     {
//                         l=mid+1;
//                         }
//                         }

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool lessthanequal(double a, double n, double m)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * a;
    }
    if (res <= m)
        return true;
    else
        return false;
}
bool IsEqual(double a, double n, double m)
{
    double res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * a;
    }
    if (res == m)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n, m;
    cin >> n >> m;
    double l = 1, r = m, mid;
    while ((r - l) > 10e-8)
    {
        mid = (l + r) / 2;
        if (IsEqual(mid, n, m))
        {
            cout << fixed << setprecision(6) << mid;
            return 0;
        }
        else if (lessthanequal(mid, n, m))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << fixed << setprecision(6) << l;

    return 0;
}