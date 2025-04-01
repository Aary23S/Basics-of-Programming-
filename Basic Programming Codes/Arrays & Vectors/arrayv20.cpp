//no greater than x
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    static int c=0;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);

    }
    int tar;
    cout<<"\nEnter the target no :";
    cin>>tar;
    for(i=0;i<v.size();i++)
    {
        if(v[i]>tar)
        {
            
            c++;
        }
    }
    cout<<"\nThe no of numbers are : "<<c;
    
    
    return 0;
}