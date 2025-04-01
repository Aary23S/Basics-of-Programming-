//bonus of emplyoee
#include<iostream>
using namespace std;
int main()
{
        int bs,bonus;
        cout<<"\nEnter the basic salary of the emplyoee : ";
        cin>>bs;
        if(bs>30000)
        {
            bs=(bs*60)/100+bs;
            cout<<"\nThe basic salary after bounus is "<<bs;

        }
        else
        {
            bs=(bs*80)/100+bs;
            cout<<"\nThe basic salary after the bonus is "<<bs;
        }

    return 0;
}