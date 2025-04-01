//program to exchange the no using the pointer 
#include<iostream>
using namespace std;
void max(int *pa,int *pb);
int main()
{
    int a,b;
    cout<<"\nEnter the two no : ";
    cin>>a>>b;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    max(pa,pb);
    return 0;
}
    void max(int *pa,int *pb)
    {
        int temp;
        temp=*pa;
        *pa=*pb;
        *pb=temp;
        cout<<"\na="<<*pa<<"\nb="<<*pb;
    }