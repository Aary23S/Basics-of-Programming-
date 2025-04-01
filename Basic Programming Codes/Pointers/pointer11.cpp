//structure to pointer
#include<iostream>
using namespace std;
struct student
{
    int roll;
    string name[20];
};
    int main()
    {
        struct student s1;
        struct student *sp;
        sp=&s1;
        cout<<"\nEnter the name of the student : ";
        cin>>s1.name[20];
        cout<<"\nEnter your roll no : ";
        cin>>s1.roll;
        cout<<"\nYour name is : "<<sp->name;
        cout<<"\nYour roll no is : "<<sp->roll;

        return 0;
    }