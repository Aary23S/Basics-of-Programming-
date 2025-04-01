//q quries and searching of element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int i;
    int q,q1;
    const long long r=10e5;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);

    }
    cout<<"\nEntre the no of queries :";
    cin>>q;
    vector<long long>temp(r,0);
    for(i=0;i<q;i++)//to enter q no of quries
    {
        cout<<"\nThe query is :";//enter quries
        cin>>q1;
        for(int j=0;j<v.size();j++)//to check query exsist in original array or not
        {
            if(v[i]==q1)
            {
                temp[q1]=1;//if it exsist then at that index in temp it get modified
            }
        
        }
        
    }        
    for(i=0;i<r;i++)
    {
        if(temp[i]!=0)//check in temp where the index is modified
        {
            cout<<"\nThe no "<< i <<"is preasent";
        }
    }
    
    return 0;
}

