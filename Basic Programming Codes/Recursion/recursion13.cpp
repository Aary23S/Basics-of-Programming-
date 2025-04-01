//maze path 
#include<bits/stdc++.h>
using namespace std;
int solve(int rowst,int colst,int rowed,int coled)
{
    if(rowst>rowed || colst>coled)
    {
        return 0;

    }
    else if(rowst==rowed && colst==coled)
    return 1;
    else
    {
        int rightways=solve(rowst,colst+1,rowed,coled);
        int downways=solve(rowst+1,colst,rowed,coled);
        return rightways+downways;
    }


}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            
            int x=solve(0,0,1,2);
            cout<<x<<" ";

return 0;
}
