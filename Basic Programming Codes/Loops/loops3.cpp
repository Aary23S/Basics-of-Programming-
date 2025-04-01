//print themultiplication table o fthe given number
#include<iostream>
using namespace std;
int main()
{
    int no,mul=1,i;
    cout<<"\nEnter the no : ";
    cin>>no;
    for(i=1;i<=10;i++)
    {
        mul=i*no;
        cout<<"\n"<<mul;
    }

    return 0;
}