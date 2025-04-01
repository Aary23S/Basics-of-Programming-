//leap year or not
#include<iostream>
using namespace std;
int main()
{
        int year;
        cout<<"\nEnter the year : ";
        cin>>year;
        if(year%4==0)
        cout<<"\nThe year "<<year<<" is leap year ";
        else
        cout<<"\nThe year "<<year <<" is not leap year";

    return 0;
}
