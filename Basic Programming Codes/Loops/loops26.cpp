//check the no is sum of the two prime no or not
#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1,no,sum=0,c=0,x=0,y=0,temp;
    cout<<"\nEnter the no : ";
    cin>>no;
    while(i<=no)
    {
        int c=0;
        int j=1;
        while(j<=i)
        {
            if(i%j==0)
            {
                c++;
            }
        
        j++;    
        }
        if(c==2)//if count is true then the no/i is prime no
        {
            //y=i;//y=2//y=3
            //temp=i;//temp=2//temp=3
            y=x;//y=0//y=2
            x=i;//x=2//x=3
            sum=x+y;//2=2+0//5=3+5
            if(sum==no)
            {
                cout<< no <<"=" << x << "+" << y;
            }
        }
        

    i++;    
    }
    if(sum!=no)
    cout<<"\nNo such pair found";
    
             
    
        
 return 0;
}