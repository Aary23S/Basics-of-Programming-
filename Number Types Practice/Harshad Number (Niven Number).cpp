#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	//Harshad Number (Niven Number) A number divisible by the sum of its digits.
    //Example: 18 → 1 + 8 = 9, and 18 % 9 = 0
 
    int n;
    cin>>n;
    int cpy=n;
    int sum=0;
    while(n>0)
    {
    	int x=n%10;
    	sum+=x;
    	n/=10;
    }
	if(cpy%sum==0)	cout<<"Niven Number";
	else cout<<"Not Niven Number";
	return 0;
}
