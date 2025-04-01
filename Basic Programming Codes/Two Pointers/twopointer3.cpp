#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v={1,1,1,0,0,0,1,1,1,1,0};
	int k=2;
	int cntZero=0,lgt=0,maxLgt=INT_MIN;
	int left=0,right=0;
	while(left<=right && right<v.size())
	{
		if(v[right]==0)	cntZero++;
		while(cntZero>k)
		{
			if(v[left]==0)
			{
				cntZero--;
				left++;
			}
		}
		if(cntZero<=k){
			lgt=right-left+1;
			maxLgt=max(maxLgt,lgt);
		}
		right++;
	}
	cout<<"The lgt of the substring is :"<<maxLgt;
	return 0;
}