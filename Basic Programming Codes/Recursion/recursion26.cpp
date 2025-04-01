//check if the string is palindrome or not
#include<bits/stdc++.h>
using namespace std;
int palCheck(string &str,int st,int ed)
{
	if(st>=ed)	return 1;
	else if(str[st]!=str[ed]) return 0;
	else
	{
		if(str[st]==str[ed])
		return palCheck(str,st+1,ed-1);
	}
}
int main()
{
	string str="abcaa";
	int st=0,ed=str.size()-1;
	if(palCheck(str,st,ed))
	cout<<"The string is pallindrome";
	else
	cout<<"The string is not pallindrome";
	return 0;
}