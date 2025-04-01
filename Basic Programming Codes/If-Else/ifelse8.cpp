//tempreture conversion//i use the wrong formulas here
#include<iostream>
using namespace std;
int main()
{
    int ftemp,ctemp;
    cout<<"\nEnter the tempreture in celcius : ";
    cin>>ctemp;
    ftemp=(1.8*ctemp)+32;
    cout<<"\nThe tempreture in farenhite is "<<ftemp;

    
    
    return 0;
}