//pointers intro
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    float y=3.2;
    int *p=&x;//assigning the add of X to the pointer variable simult
    float *q=&y;//assigning the add of Y to the pointer variable simult
    cout<<*p<<endl;//printed the value stored in the p and q
    cout<<*q<<"\n";
    cout<<x<<endl;//printed the value of x and y
    cout<<y<<"\n";
    cout<<p<<endl;//printed the address of the p and q
    cout<<q<<"\n";
    cout<<&x<<endl;//printed the address of the a and y    
    cout<<&y<<endl;

    return 0;
}