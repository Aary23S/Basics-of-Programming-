//Pascal's Trinangle
#include<bits/stdc++.h>
using namespace std;
void pascal(int n);
int main()
{
    int n;
    cout<<"\nEnter the size of the pascal's triangle :";
    cin>>n;
    pascal(n);


    return 0;
}
    void pascal(int n)
    {
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            cout<<" ";
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    arr[i][j]=1;
                }
                else
                {
                    arr[i][j]=arr[i-1][j-1]+arr[i-1][j];    
                }
             //

            }
        }
        cout<<"\nThe pascal's triangle is :";
        for(int i=0;i<n;i++)
        {
            cout<<endl;
            for(int j=0;j<=i;j++)
            {
               //cout<<endl;
               if(j==0||j==i)
               {
                 //cout<<" ";
                 cout<<arr[i][j]<<"  ";
                 //cout<<endl;
                 //break;
               }
               else
               {
                 //cout<<" ";
                 cout<<arr[i][j]<<"  ";
                                  //break;
               }
            

            
            }
            cout<<endl;
            
        }

    }

    //time complexity ->O(n)+O(n)->O(2N)