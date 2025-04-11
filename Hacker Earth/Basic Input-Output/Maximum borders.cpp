Maximum borders
https://www.hackerearth.com/problem/algorithm/maximum-border-9767e14c/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		vector<vector<char>>v(n,vector<char>(m));
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			cin>>v[i][j];
		}
		
		ll cnt=0;
		ll maxCnt=INT_MIN;
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				if(v[i][j]=='#')
				{
					cnt++;
					maxCnt=max(maxCnt,cnt);
				}
				else
				{
					cnt=0;
				}
			}
		}
		cout<<maxCnt<<"\n";
	}
	
	return 0;
}
