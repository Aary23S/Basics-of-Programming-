//finding and removing duplicate from the sorted array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void duplicate(vector <int> v,int n);
void print(vector <int> v,int n);
int main()
{
    int i,j;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    duplicate(v,v.size());

    return 0;
}
    void duplicate(vector <int> v,int n)
    {
        int i=0,j=0;
        {    
            while(i<n)
            {
                if(v[i]!=v[i+1])
                {
                    v[j]=v[i];
                    j++;
                }
            i++;
            }
            v[j]=v[i-1];
        }
        print(v,j);
    }
    void print(vector <int> v,int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<endl;
        }
    }