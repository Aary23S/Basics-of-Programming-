#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	//Strong Number A number whose sum of the factorials of its digits is equal to the number itself.
	//Example: 145 = 1! + 4! + 5! = 145
	int n;
	cin>>n;
	int cpy=n;
	int fact,sum=0;
	while(n>0)
	{
		fact=1;
		int x=n%10;
		for(int i=1;i<=x;i++)
		{
			fact=fact*i; 
		}
		sum+=fact;
		n/=10;
	}
	if(sum==cpy)	cout<<"Strong Number";
	else cout<<"Not Strong Number";
	return 0;
}
