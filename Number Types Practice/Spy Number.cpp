#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	//Spy Number A number where the sum and the product of its digits are equal.
	//Example: 112 → sum = 1+1+2=4, product = 1×1×2=2 (so not a spy number); 123 → sum = 6, product = 6
 
	int n;
	cin>>n;
	int cpy=n;
	int sum=0,mul=1;
	while(n>0)
	{
		int x=n%10;
		sum+=x;
		mul*=x;
		n/=10;
	}
	if(sum==mul)	cout<<"Spy Number";
	else cout<<"Not Spy Number";
 
	return 0;
}
