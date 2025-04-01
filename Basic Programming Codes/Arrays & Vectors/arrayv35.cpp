//combination of Q quries and the Two pointer
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(6);
    int i,Q,l,r,sum=0,sum1=0;
    for(i=1;i<=v.size();i++)
    {

        cin>>v[i];
    }
    cout<<"\nEnter the number of the queries :";
    cin>>Q;
    for(i=1;i<=Q;i++)
    {
        cout<<"\nEnter the value of the L and R : ";
        cin>>l>>r;
        sum=sum1=0;
        for(int j=1;j<=r;j++)
        {
            sum=sum+v[j];
        }
        for(int j=1;j<l;j++)
        {
            sum1=sum1+v[j];
        }
        sum=sum-sum1;
        cout<<"\nThe sum of the numbers between "<<l<<","<<r<<" is :"<<sum<<endl;
    }    
    
    return 0;
}