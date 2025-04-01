//bonus of the emplyoee nesting 
#include<iostream>
using namespace std;
int main()
{
    float  sal,bonus;
    char gen; 
    cout<<"\nEnter the basic salary of emplyoee : ";
    cin>>sal;
    cout<<"\nEnter the gender of the emplypee : ";
    cin>>gen;
    if(gen=='m' || gen=='M')
    {
        if(sal>50000)
        {
            sal=(sal*50)/100+sal;
            cout<<"\nThe salary of an emplyoee is "<<sal;
        }
        else
        {
            sal=(sal*40)/100+sal;
            cout<<"\nThe salary of the emplyoee is "<<sal;
        }
    }
    else if(gen=='f' || gen=='F')
    {
        if(sal>50000)
        {
            sal=(sal*50)/100+sal;
            cout<<"\nThe salary of an emplyoee is "<<sal;
        }
        else
        {
            sal=(sal*60)/100+sal;
            cout<<"\nThe salary of an emplyoee is "<<sal;
        }
    }


    return 0;
}