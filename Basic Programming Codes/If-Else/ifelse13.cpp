//check the type of the triangel by angel 
#include<iostream>
using namespace std;
int main()
{
        int a1,a2,a3;
        cout<<"\nEnter the the angles of the triangle : ";
        cin>>a1>>a2>>a3;
        if(a1==60 && a2==60 && a3==60 && a1+a2+a3<=180)
        cout<<"\nThe traingle is equilateral triangle : ";
        else if(a1==45 && a2==45 && a3==90 && a1+a2+a3<=180|| a2==45 && a3==45 && a1==90 && a1+a2+a3<=180|| a3==45 && a1==45 && a2==90 && a1+a2+a3<=180)
        cout<<"\nThe triangle is isocleous triangle : ";
        else if(a1!=a2 && a2!=a3 && a3!=a1 && a1+a2+a3<=180)
        cout<<"\nThe triangle is scalen triagle : ";
        else
        cout<<"\ntriangle does not exsit ";

    return 0;
}