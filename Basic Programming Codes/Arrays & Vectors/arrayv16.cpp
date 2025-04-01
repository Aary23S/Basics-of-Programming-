//vectors passing in functions
#include<iostream>
#include<vector>
using namespace std;
void change(vector <int> a);//just copy of (v)
//modifications in (a) won't affect the original vector
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
    change(v);
    for(i=0;i<v.size();i++)
    {
        cout<<"\n"<<v[i];
    }

    return 0;
}
    void change(vector<int> a)
    {
        int i;
        a[0]=100;
        for(i=0;i<a.size();i++)
        {
            cout<<"\n"<<a[i];
        }
        cout<<endl;


    }