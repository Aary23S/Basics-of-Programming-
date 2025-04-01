#include<bits/stdc++.h>
using namespace std;
#define ll long long
void toh(int nn,char A,char B,char C)
{
    if(nn==0)   return ;
    else
    {
        toh(nn-1,A,C,B);
        cout<<A<<" -> "<<C<<"\n";
        toh(nn-1,B,A,C);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

            int nn;
            cin>>nn;
            toh(nn,'S','H','D');



return 0;
}
