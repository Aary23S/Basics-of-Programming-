//check the type of the triangle by sides
#include<iostream>
using namespace std;
int main()
{
        int s1,s2,s3;
        cout<<"\nEnter the sides of the triangle : ";
        cin>>s1>>s2>>s3;
        if(s1==s2 && s2==s3)
        cout<<"\nthe triangle is equilateral triangle  ";
        else if(s1==s2 || s2==s3 || s1==s3)
        cout<<"\nthe triangle is isoscleous triangle  ";
        else if(s1!=s2 && s2!=s3 && s1!=s3)
        cout<<"\nthe triangle is scalan triangle ";

    return 0;
}