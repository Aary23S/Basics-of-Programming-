//check the count of the vowels 
#include<bits/stdc++.h>
using namespace std;
int vowelCheck(string &str,int index,int cnt)
{
	if(index==str.length())	return cnt;
	else
	{
		if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u') cnt++;
		if(str[index]=='A'||str[index]=='E'||str[index]=='I'||str[index]=='O'||str[index]=='U') cnt++;
		return vowelCheck(str,index+1,cnt);
	}
}
int main()
{
	string str="AeIowa";
	int index=0,cnt=0;
	int count=vowelCheck(str,index,cnt);
	cout<<count;
	return 0;
}