//largest three ele in vector
#include<iostream>
#include<vector>
#include<algorithm>
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
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(i>=2)
        {
            cout<<v[i]<<endl;
        }
    }

return 0;
}