//second largest element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v;
    int i=0;
    for(i;i<7;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    sort(v.begin(),v.end());
    //cout<<"\nThe second largest no is : "<<v[i-2];
    while(i>=0)
    {
        if(v[i-1]==v[i-2])
        {
            i--;
        }
        else
        {
            cout<<"\nThe second highest no is : "<<v[i-2];
            break;
        }
    }
    return 0;

    
}