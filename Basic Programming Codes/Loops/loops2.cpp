//print the first multiple of 5 which is also a multiple of 7
#include<iostream>
using namespace std;
int main()
{
    int i=1,c=0;
    while(true)
    {
        if(i%5==0 && i%7==0)
        {
            c++;
        }
        if(c==1)
        break;
    i++;
    }
    cout<<"\nThe first no is : "<<i;

    return 0;
}