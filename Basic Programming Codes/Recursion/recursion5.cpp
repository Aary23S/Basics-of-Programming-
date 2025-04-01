//print 1 to n numbers
#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
        if(n==1)
        cout<<n<<"\n";
        else
        {
            print(n-1);
            cout<<n<<"\n";//here i have to print the number after returnning from the recursive call
        }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
            int n;
            cin>>n;
            print(n);


return 0;
}
