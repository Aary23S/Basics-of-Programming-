//factorail of the largest number in the vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int max,fact=1;
    for(int i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    max=v[v.size()-1];
    cout<<"\nThe max no is : "<<max;
    
    for(int i=max;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<"\nThe factorial of the number is : "<<fact;
    
    return 0;
}