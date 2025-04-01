//differeence between even and odd indexes
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,sum1=0,sum2=0,dif=0;
    vector <int> v;
    for(i=0;i<5;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
    for (i = 0; i < v.size(); i++)
    {
        if(i%2==0)
        {
            sum1=sum1+v[i];
        }
        else if(i%2==1)
        {
            sum2=sum2+v[i];
        }
    }
    dif=sum1-sum2;
    cout<<"\nThe diffrence is : "<< dif;

    return 0;
}