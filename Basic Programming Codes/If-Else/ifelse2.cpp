//divide the age group 
#include<iostream>
using namespace std;
int main()
{
        int age;
        cout<<"\nEnter the age of the student : ";
        cin>>age;
        if(age>18)
        {
            cout<<"\nThe student is adult";
        }
        else if(age<18 && age>12)
        {
            cout<<"\nThe student is teenager";
        }
        else
        {
            cout<<"\nThe student is child";
        }
    return 0;
}