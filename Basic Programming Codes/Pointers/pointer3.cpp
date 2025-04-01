#include<iostream>
using namespace std;
int main()
{
    int x=100,y;
    int *p1,*p2;
    p1=&x;
    y=*p1;
    cout<<x<<endl;//100
    cout<<y<<endl;//100
    cout<<*p1<<endl;//100
    x=x+100;
    cout<<x<<endl;//200
    cout<<y<<endl;//100
    cout<<*p1<<endl;//200
    *p1=*p1+100;
    cout<<x<<endl;//300
    cout<<y<<endl;//100
    cout<<*p1<<endl;//300
    y=y+100;
    cout<<x<<endl;//300
    cout<<y<<endl;//200
    cout<<*p1<<endl;//300
    p2=p1;//p2=add of x which is stored in p1
    cout<<*p2<<endl;//300
    *p2=y;//
    cout<<x<<endl;//200
    cout<<y<<endl;//200
    cout<<*p1<<endl;//200
    cout<<*p2<<endl;//200
    return 0;
}