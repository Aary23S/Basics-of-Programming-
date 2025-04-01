//reverse the string using reccursion or reverse the char array using reccursion
#include<bits/stdc++.h>
using namespace std;
vector<char> reverseCheck(vector<char>&v,int st,int ed)
{
	if(st>ed)	return v;
	else
	{
		swap(v[st],v[ed]);
		
		return reverseCheck(v,st+1,ed-1);
	}
}
int main()
{
	vector<char>v={'a','a','r','y'};
	int st=0,ed=v.size()-1;
	vector<char> count=reverseCheck(v,st,ed);
	for(auto it:count)
	cout<<it<<" ";
	return 0;
}