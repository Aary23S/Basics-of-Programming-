#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
 
	// Automorphic Number A number whose square ends in the same digits as the number itself.
	// Example: 76 → 76² = 5776
	int n;
	cin>>n;
	int sq=pow(n,2);
	int temp=n;
	bool ans = true;
	while(temp)
	{
		if(temp%10 != sq%10) 
		{
			ans=false;
			break;
		}
		temp/=10;
		sq/=10;
	}
	if(ans==true)
	cout<<"Automorphic Number";
	else
	cout<<"Not Automorphic Number";
 
 
 
	return 0;
}
