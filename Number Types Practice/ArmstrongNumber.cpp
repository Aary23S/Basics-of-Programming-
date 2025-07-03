#include<bits/stdc++.h>
using namespace std;
int main()
{
	//armstrong number
	//153=1^3+5^3+3^3=153
	int n;
	cin>>n;
	int cube=0;
	int temp=n;
	while(n>0)
	{
		int x=n%10;
		cube+=pow(x,3);
		n/=10;
	}
	if(temp==cube)	cout<<"Armstrong";
	else cout<<"Not Armstrong";
	return 0;
}
