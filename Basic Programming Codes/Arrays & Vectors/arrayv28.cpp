//rotation of the vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{   
    int i,k;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    cout<<"\nEnter the value of K :";
    cin>>k;
    for(i=0;i<k%v.size();i++)
    {
        int temp=v[v.size()-1];
        for(int j=v.size()-2;j>=0;j--)
        //logic is useful when k<size
        //k>size k%v.size()
        {
            v[j+1]=v[j];
        }
        v[0]=temp;
    }
    cout<<"\nArray after "<< k<< " rotaton is :";
    for(i=0;i<v.size();i++)
    {
        cout<<"\n"<<v[i]<<endl;
    }

    return 0;
}