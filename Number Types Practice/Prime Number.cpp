#include <bits/stdc++.h>
using namespace std;
int main() 
{
 
	// Prime Number A number greater than 1 that has only two factors: 1 and itself.
	// Example: 2, 3, 5, 7, 11
	int n;
	cin>>n;
	int cntP=0;
	bool ans=true;
	for(int i=1;i<=n;i++)
	{
		if(n==2)
		{
			//ans=true;
			break;
		}
		else if(n%i==0 && i!=1 && i!=n) 
		{
			ans=false;
			break;
		}
 
	}
	if(ans==true)	cout<<"Number is Prime";
	else cout<<"Not Prime Number";
 
	return 0;
}
