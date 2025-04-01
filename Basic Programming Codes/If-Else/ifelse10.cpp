//grade of the student
#include<iostream>
using namespace std;
int main()
{
        int marks;
        cout<<"\nEnter the marks of the student out of 100 : ";
        cin>>marks;
        if(marks>=90)
        cout<<"\nThe grade is A ";
        else if(marks>=80 && marks<90)
        cout<<"\nThe grade is B ";
        else if(marks>=70 && marks<80)
        cout<<"\nThe grade is C ";
        else if(marks>=60 && marks<70)
        cout<<"\nThe grade is D ";
        else
        cout<<"\nYou are fail!!!";


    return 0;
}