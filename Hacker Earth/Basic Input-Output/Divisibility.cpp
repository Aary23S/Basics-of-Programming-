Divisibility
https://www.hackerearth.com/problem/algorithm/divisible-or-not-81b86ad7/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll nn;
	cin>>nn;
	
	vector<ll>v(nn);
	for(ll i=0;i<nn;i++)
	cin>>v[i];

	ll num=v[nn-1];
	if(num%10==0)	
	cout<<"Yes";
	else
	cout<<"No";


	return 0;
}
