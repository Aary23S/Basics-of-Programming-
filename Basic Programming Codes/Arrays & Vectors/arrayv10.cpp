//vector opretions
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.resize(3);
    cout<<"\nThe size : "<<v.size();
    cout<<"\nThe capacity : "<<v.capacity();

    v.push_back(4);
    cout<<"\nThe size : "<<v.size();
    cout<<"\nThe capacity : "<<v.capacity();

    v.insert(v.begin()+2,3);
    cout<<"\nThe size : "<<v.size();
    cout<<"\nThe capacity : "<<v.capacity();
    
    v.pop_back();
    cout<<"\nThe size : "<<v.size();
    cout<<"\nThe capacity : "<<v.capacity();

    v.erase(v.end()-2);
    cout<<"\nThe size : "<<v.size();
    cout<<"\nThe capacity : "<<v.capacity();
    


    return 0;
}