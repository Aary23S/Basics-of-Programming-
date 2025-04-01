//largest no in 3 
#include<iostream>
using namespace std;
int main()
{
        int x,y,z;
        cout<<"\nEnter the value of x : ";
        cin>>x;
        cout<<"\nEnter the value of y : ";
        cin>>y;
        cout<<"\nEnter the value of z : ";
        cin>>z;
        if(x>y && y>z)
        cout<<"\nThe x is greater no ";
        else if(y>z)
        cout<<"\nThe y is greater no ";
        else
        cout<<"\nThe z is greater no ";

    return 0;
}