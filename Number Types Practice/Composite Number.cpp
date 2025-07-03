#include <bits/stdc++.h>
using namespace std;
int main() 
{
	// Composite Number A number greater than 1 that is not prime.
	// Example: 4, 6, 8, 9
	int st=1,ed=10;
 
	for(int i=st;i<=ed;i++)
	{
		bool ans=false;
		if(i!=1)
		{
			for(int j=1;j<=i;j++)
			{
				if(i==2) break;
				else if(i%j==0 && j!=1 && j!=i)
				{
					ans=true;
					//break;
				}
			}
			if(ans==true)	cout<<i<<"\n";
 
		}
 
	}
 
 
 
	return 0;
}
