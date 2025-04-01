//taking input in the 2D array
#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];
    cout<<"\nEnter the numbers : ";
    for(int i=0;i<2;i++)
    {
        cout<<"\n";
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nNumbers in the matrix : ";
    for(int i=0;i<2;i++)
    {
        cout<<"\n";
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}