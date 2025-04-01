//target sum two sum
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int i,sum,j;
    cout<<"\nEnter the no : ";
    cin>>sum;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(i=0;i<v.size();i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==sum)
            {
                cout<<v[i]<<","<<v[j]<<endl;
            }
        }
    }



    return 0;
}