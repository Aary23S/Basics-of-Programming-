//pattern printing 8
/*
12345
1234
123
12
1
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=5;i>0;i--)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
        {
            cout<< j ;
        }
    }

    return 0;
}