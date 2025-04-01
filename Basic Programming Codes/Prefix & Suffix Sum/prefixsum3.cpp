//find the longest and the smallest subarray eqquals to the sum K
//Brute Force Approch:
//Tc-O(n2) SC-O(1)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        vector<int>v={1,2,3,-3,1,1,1,4,2,-3};
        int k=3;
        int max=0,sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum=0;
            for(int j=0;j<v.size();j++)
            {
                sum+=v[j];
                if(sum==k)
                {
                    int n=j-i+1;
                    if(max<n)
                    max=n;
                }
            }
        }
        cout<<"The max subarray length is :"<<max<<"\n";
return 0;
}
*/



//Optimal Approch : Using HAshMap
//TC-O(n2) SC-O(n)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int>v={1,2,3,1,1,1,1,4,2,3};
    unordered_map<long long,int>map;
    int k=3;
    int len=0,n=0,sum=0,diff;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        diff=sum-k;
        if(sum==k) n=max(n,i+1);    //if the sum and the K are already same then it itself is the subarray
        else
        {
            if(map.find(diff)!=map.end())
            {
                len=i-map[diff];//current idx of the prefixsum - idx of its previous prefixsum to get length of subarray
                n=max(len,n);
            }

        }
        if(map.find(sum)==map.end())//checking if the prefixsum is previously exsisted at specific idx or not 
        {
            map[sum]=i;
        }
    }
    cout<<"The largest subarray legth :"<<n<<"\n";

    
    return 0;
} */




//Optimal Approch 2:By using two pointers
//TC->O(n2) SC->O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v={1,2,3,1,1,1,4,1,1,1};
    int k=3;
    int i=0,j=0;
    int sum=v[0],maxl=0,cnt=1;//use maxl=v.size() for smallest
    int temp=maxl;
    while(j<v.size())
    {
         while(i<=j && sum>k)//i want to continuously reduced the left index
         {
            sum-=v[i];//reduced the number at previous idx from sum and increment perv idx
            i++;
         }
         if(sum==k)//compare the idx position for the maxidx
         {
            maxl=max(maxl,j-i+1);//use min(X,Y) for smallest
            
            /*if(maxl==temp)
            cnt++; 
            else
            temp=maxl;*/
         }
         
         j++;//keep increment the right pointer 
         if(j<v.size())
         {
            sum+=v[j];
         }
    //j++;    
    
    }
    cout<<"The max length of subarray :"<<maxl<<"\n";
    cout<<"Count of largest subarray :"<<cnt<<"\n";
    return 0;
}