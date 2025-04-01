//copy comtent in the reverse order
#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    int n=v.size();
    cout<<n;
    vector <int> v1(n);//this the must to define the size of the newly created vector
    for( i=0;i<v1.size();i++)
    {
        int j=v.size()-1-i;
        v1[i]=v[j];
    }
    cout<<"\nThe vector in reverse order is : ";
    //fflush("sys");
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}