//check the array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,c=0;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(i=0;i<v.size();i++)//1 3 2 4 5
    {
        for(j=i+1;j<v.size();j++)
        {
            if(v[i]>v[j])
            {
                c++;
            }
            
        }
            if(c>0)
            {
                cout<<"\nThe array is not sorted";
                break;
            }
            else if(c==0)
            {
                cout<<"\nThe array is sorted";
                break;
            }
    }
    return 0;

}