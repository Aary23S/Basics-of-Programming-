//print the day based on the day no
#include<iostream>
using namespace std;
int main()
{
        int no;
        cout<<"\nEnter the no : ";
        cin>>no;
        switch(no)
        {
            case 1 :
            cout<<"\nThe monday";
            break;
            case 2 :
            cout<<"\nThe Tuesday";
            break;
            case 3 :
            cout<<"\nThe Wednesday ";
            break;
            case 4 :
            cout<<"\nThe Thrusday ";
            break;
            case 5 :
            cout<<"\nThe Friday ";
            break;
            case 6 :
            cout<<"\nThe Saturday ";
            break;
            case 7 :
            cout<<"\nThe Sunday ";
            break;
            default :
            cout<<"\nWrong input";
            break;
        }

    return 0;
}