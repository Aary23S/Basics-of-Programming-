//two pointers method M2
#include<iostream>
#include<vector>
using namespace std;
void sorted(vector<int> &v,int n);
void swap(int &v1 , int &v2);
int main()
{
    vector<int>v(10);
    int i;
    for(i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    sorted(v,v.size());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}
    void sorted(vector<int> &v,int n)
    {
        int i=0,j=n-1;
        while(i<j)
        {
           
                if(v[i]==1 && v[j]==0)
                {
                    swap(v[i],v[j]);
                    i++;
                    j--;
                }
                else if(v[i]==1 && v[j]==1 || v[i]==0 && v[j]==0)
                {
                    j--;
                }
                else if(v[i]==0 && v[j]==1)
                {
                    i++;
                }

        }

    }
    void swap(int &v1,int &v2)
    {
        int temp;
        temp=v1;
        v1=v2;
        v2=temp;
    }