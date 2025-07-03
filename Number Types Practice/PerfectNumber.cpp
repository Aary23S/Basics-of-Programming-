#include<bits/stdc++.h>
using namespace std;
int main()
{
	//perfect number
	// number whose sum of its proper divisors (excluding itself) equals the number.
	//Example: 28 → 1 + 2 + 4 + 7 + 14 = 28
 
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0 && i!=n)
		{
			sum+=i;
		}
	}
	if(sum==n)	cout<<"Perfect Number";
	else cout<<"Not Perfect Number";
	return 0;
}
