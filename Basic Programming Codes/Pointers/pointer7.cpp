//arrya as apointer and passing the arrya in a function using the pointer 
#include<iostream>
using namespace std;
void print(int *ptr,int n);
int main()
{
    int arr[3]={5,6,7};
    int n=3;
    int *parr;
    parr=&arr[0];//store the add of arr(0) in parr
    print(parr,n);//passing parr and size of an array


    return 0;
}
    void print(int *ptr,int n)
    //storing the add of arr(0) in int pointer *ptr
    //now we can access the entire array in the print() funtion using address of array
    {
        int i;
        for(i=0;i<n;i++)
        {
            cout<<"\n"<<*(ptr+i);
        }
    }