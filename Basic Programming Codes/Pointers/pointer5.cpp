//pointer arithmatic 
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;
    p=&x;
    cout<<x<<endl;//10
    cout<<p<<endl;//add
    x++;//10+1
    cout<<x<<endl;//11
    cout<<p<<endl;//add
    p++;//add+1*2 becaz of int DT
    cout<<x<<endl;//11
    cout<<p<<endl;//add+2
    cout<<*p<<endl;//GV
    p=p+5;//add+5*2 becaz of int DT
    cout<<p<<endl;//add+10
    p=p-6;//add-6*2
    cout<<*p<<endl;//11
    return 0;
}