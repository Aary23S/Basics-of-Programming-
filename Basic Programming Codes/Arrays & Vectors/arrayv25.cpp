//finding triplet M2
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int i,sum,no1;
    cout<<"\nEnter the sum :";
    cin>>sum;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]<=sum)
            {
                 no1=sum-(v[i]+v[j]);
                for(int k=j+1;k<v.size();k++)
                {
                    if(no1==v[k])
                    {
                        cout<<v[i]<<","<<v[j]<<","<<v[k]<<endl;
                    }
                }
            }
        }
    }

    return 0;
}