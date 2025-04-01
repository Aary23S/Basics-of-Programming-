//duplicate elememnt or not
#include<iostream>
using namespace std;
int duplicate(int *arr,int no);
int main()
{
    int i,arr[5],no,x,c=0;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched:";
    cin>>no;
    x=duplicate(arr,no);
    if(x>1)
    cout<<"\nDuplicate exsist";
    else
    cout<<"\nDuplicate don't exsist";
    return 0;
}
    int duplicate(int *arr,int no)//declaring pointer variable to store the address of the array
    {
        int i;
        static int c=0;
        for(i=0;i<5;i++)
        {
            if(arr[i]==no)
            {
                c++;
            }
        }
        if(c>1)
        return c;
    }