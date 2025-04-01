//print 1 to n and then n-1 to 1
#include<bits/stdc++.h>
using namespace std;
void solveInc(int n)
{
        if(n==1)
        cout<<n<<" ";
        else
        {
            solveInc(n-1);
            cout<<n<<" ";
        }
}
void solveDec(int n)
{
    if(n==2)
    cout<<n-1<<" ";
    else
    {
        cout<<n-1<<" ";
        solveDec(n-1);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n;
            cin>>n;
            solveInc(n);
            solveDec(n);

return 0;
}


