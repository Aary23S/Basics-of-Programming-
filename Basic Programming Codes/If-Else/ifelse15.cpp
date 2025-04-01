//mathamatical opretion to perform
#include<iostream>
using namespace std;
int main()
{
    int z,x,y,no;
    cout<<"\nEnter the values of the two no : ";
    cin>>x>>y;
    cout<<"\nEnter the answer : ";
    cout<<"\n1.addition\n2.subtraction\n3.multiplication\n4.division";
    cin>>no;
    switch(no)
    {
        case 1 :
        z=x+y;
        cout<<"\nThe addition is : "<<z;
        break;
        case 2 :
        z=x-y;
        cout<<"\nThe subtraction is : "<<z;
        break;
        case 3 :
        z=x*y;
        cout<<"\nThe multiplication is : "<<z;
        break;
        case 4 :
        z=x/y;
        cout<<"\nThe division is : "<<z;
        break;
        default :
        cout<<"\nthe wrong input enterd ";
        break;
    }
    return 0;
}