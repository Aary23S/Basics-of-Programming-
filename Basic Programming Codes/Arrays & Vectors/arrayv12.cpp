//last occurance of the digit
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num,c=0,x,i;
    vector <int> v;
    cout<<"\nEnter the no in vector : ";
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    cout<<"\nEnter the num : ";
    cin>>num;

    for(i=0;i<v.size();i++)
    {
        if(v[i]==num)
        {
            c++;
             x=i;
        }
    }   
    cout<<"\nThe occurance will be at : "<<x;
   

    return 0;
}

