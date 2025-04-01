//find the duplates/ 2 sum problem
#include<iostream>
#include<vector>
using namespace std;
void sum(vector <int> v,int x);
int main()
{
    int i,x;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    cout<<"\nEnter the sum : ";
    cin>>x;
    sum(v,x);

    return 0;
}
    void sum(vector <int> v,int x)
    {
        int i,j;
        for(i=0;i<v.size();i++)//1 2 3 4 5
        {
            for(j=i+1;j<v.size();j++)
            {
                if(v[i]+v[j]==x)
                {
                        cout<<i << "," << j << endl;
                }
            }
        }

    }