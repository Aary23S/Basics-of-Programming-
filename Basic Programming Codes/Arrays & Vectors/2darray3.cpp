//transpose of the matrix
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j,arr1[3][3];
    cout<<"\nEnter teh numbers in array : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nThe transpose of the matrix is : ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr1[i][j]=arr[j][i];
            //cout<<arr[j][i];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            cout<<arr1[i][j];
        }
        cout<<"\n";
    }
   

    return 0;
}