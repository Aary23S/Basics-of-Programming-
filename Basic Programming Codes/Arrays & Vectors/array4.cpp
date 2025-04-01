//search the given no is preassent in the array or not
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,x;
    cout<<"\nEnter the no in array : "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the no to find out :"<<endl;
    cin>>x;
    for(i=0;i<5;i++)
    {
        if(x==arr[i])
        {
            cout<<"\nThe no "<< x <<" found at "<< i;
            break;
        }
        /*else
        {
            cout<<"\nThe no is not found ";
            break;
        }*/
    }
    return 0;
}