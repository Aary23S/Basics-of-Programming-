//find the row with max no of 1s in the sorted boolean matrix
#include<bits/stdc++.h>
using namespace std;
void  onesfind(vector <vector<int>> &matix ,int r ,int c);
int main()
{
    int r,c;
    cout<<"\nEnetr the rows and columns of the matrix :"<<endl;
    cin>>r>>c;
    vector<vector<int>>matix(r,vector<int>(c));
    cout<<"\nEnter the elements of the matrix:"<<endl;
    for(int i=0;i<r;i++)
    {
        cout<<endl;
        for(int j=0;j<c;j++)
        {
            cin>>matix[i][j];   
        }
        cout<<endl;
    }
    //sort(matix.begin(), matix.end());//sorting the boolean matrix
    onesfind(matix,r,c);
    return 0;
}
    void  onesfind(vector <vector<int>> &matix ,int r ,int c)
    {
        int max=0,size,idx;
        for(int i=0;i<r;i++)
        {
            //cout<<endl;
            for(int j=0;j<c;j++)
            {
                if(matix[i][j]==1)
                {
                    size=(r)-(j);
                    if(max<size)
                    {
                       max=size;
                       idx=i;
                    }
                break;
                }
                if(matix[i][j]!=matix[i][j+1])
                {
                    size=(r)-(j);
                    if(max<size)
                    {
                       max=size;
                       idx=i;
                    }
                break;
                }     
                
            }
            
            
        
        }
        cout<<"\nThe row having max no of 1s is :"<<idx<<endl;

    }