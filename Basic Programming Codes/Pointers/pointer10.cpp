//progarm for array to pointer
//calculate the largest amoung the 5 no using array of pointers
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={8,5,6,3,7};
    int *pa[5];
    int i;
    for(i=0;i<5;i++)
    {
        pa[i]=&arr[i];
        //pa++;
    }
    int max;
    pa[0]=&arr[0];
    max=*pa[0];
    for(i=1;i<5;i++)
    {
        if(max<*pa[i])
        {
            max=*pa[i];
        }

    }
    cout<<"\n"<<max;


    return 0;
}
