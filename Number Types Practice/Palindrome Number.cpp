#include <bits/stdc++.h>
using namespace std;
int main() 
{
 
	// Palindrome Number A number that reads the same backward as forward.
	//Example: 121, 1331
	int n;
	cin>>n;
	int temp=n,num=0;
	while(n>0)
	{
		int x=n%10;
		num=(num*10)+x;
		n/=10;
	}
	if(temp==num)	cout<<"Pallindrom Number";
	else cout<<"Not Pallindrome Number";
	return 0;
}
