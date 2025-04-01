//looping of vectors
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<5;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    cout<<"The elements in the array are: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<i<<endl;
    }

    return 0;
}