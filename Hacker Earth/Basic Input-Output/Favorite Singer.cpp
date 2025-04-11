Favorite Singer
https://www.hackerearth.com/problem/algorithm/favourite-singer-a18e086a/ 

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

	long long n;
	cin>>n;
	vector<long long>v(n);
	unordered_map<long long,long long>mp;
	long long maxVal=INT_MIN;
	for(long long i=0;i<n;i++)
	{
		cin>>v[i];
		mp[v[i]]++;
	
		
		maxVal=max(maxVal,mp[v[i]]);
	}

	long long cnt=0;
	for(auto it:mp)
	{
		if(it.second==maxVal)	cnt++;
	}
	
	cout<<cnt;

	return 0;

}

