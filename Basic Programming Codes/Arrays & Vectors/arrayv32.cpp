//two pointers even and odd
#include<iostream>
#include<vector>
using namespace std;
void swap(int &a,int &b);
int main()
{
    vector <int>v(8);
    int i=0,j;
    for(i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    j=v.size()-1;
    i=0,j;
    while(i<j)
    {
        if(v[i]%2==1 && v[j]%2==0)
        {
            swap(v[i],v[j]);     
            i++;
            j--;
        }
        else if(v[i]%2==1 && v[j]%2==1 ||v[i]%2==0 && v[j]%2==0)
        {
            j--;
        }
        else if(v[i]%2==0 && v[j]%2==1)
        {
            i++;
        }
        //else if(i==i || j==j)
        //break;
    }
    cout<<"The sorted array is: ";
    for(i=0;i<8;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
        void swap(int &a,int &b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;

        }