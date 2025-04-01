//nos strictly greater than x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,x,c=0;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    cout<<"\nEnter the no : "<<endl;
    cin>>x;
    for(i=0;i<v.size();i++)
    {
        if(v[i]>x)
        {
           // c=0;
            c++;
        }
    }
    cout<<"\nTotal "<< c <<"no are greater than "<<x;
    

    return 0;
}