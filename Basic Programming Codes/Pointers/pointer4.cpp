//swappinng two no using pointers
#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main()
{
    int x=10;
    int y=5;
    swap(&x,&y);//passing the address of the variables to access them in the user defined function
    cout<<x<<" "<<y;

    return 0;
}
    void swap(int *x,int *y)
    //declaration of the pointer variable and storing the address of the variables passed from the main function
    //now we can access the pointer variable in the swap function
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }