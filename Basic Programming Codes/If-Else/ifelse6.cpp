//divisibility of 5
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"\nEnter the no : ";
    cin>>no;
    if(no%5==0)
    cout<<"\nThe "<<no<<" is divisible by 5";
    else
    cout<<"\nThe no is not divisible by 5 ";

    return 0;
}