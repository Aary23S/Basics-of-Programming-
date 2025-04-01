//modification in the declaration of the array 
#include<iostream>
using namespace std;
int main()
{
    int x=5;
    float y=3.2;
    int *p;
    float *q;
    p=&x;//assigning the add of the X after the declaration of the pointer variable 
    q=&y;//asssigning the add of the Y after  the decalration of the pointer
    cout<<*p<<endl;//printg the value stored in the pointer variable
    cout<<*q<<endl;



    return 0;
}