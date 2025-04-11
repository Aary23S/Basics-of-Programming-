Zoos 
https://www.hackerearth.com/problem/algorithm/is-zoo-f6f309e7/

// 2*X=Y means if z is 3 then o will be 6
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string str;
	cin>>str;
	// map<char,ll>mp;

	ll cntZ=0,cntO=0;

	if(str.size()>20)	cout<<"No";
	else
	{
		for(ll i=0;i<str.size();i++)
		{
			if(str[i]=='z')	cntZ++;
			else if(str[i]=='o')	cntO++;
		}
		if((2*cntZ)==cntO)	cout<<"Yes";
		else cout<<"No";
		
	}

	return 0;
}
