//vector is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,c=0;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
        for(i=0;i<v.size()-1;i++)//1 2 3 4 5
        {
            if(v[i]>v[i+1])
            {
                c++;
            }
        }
        if(c>0)
        {
            cout<<"\nThe vector is not sorted";
        }
        else
        {
            cout<<"\nThe vector is sorted ";
        }
return 0;
}