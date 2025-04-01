//find the pair of numbers whose sum is equal to the X
//brute force approch 
//TC-O(n2) SC-O(1)

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x;
    cin>>x;//-2
    bool ans=false;
    vector<int>v={0,-1,2,-3,1}; //-2-0=-2 -2+1=-1 -2-2=-4 -2+3=1 -2-1=-3
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==x)
            ans=true;
        }
    }
    if(ans==true) cout<<"True";
    else cout<<"False";

    
    
    
    return 0;
}*/

//optimal solution
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    
    int x;
    cin>>x;//-2
    bool ans=false;
    vector<int>v={0,-1,2,-3,1}; //-2-0=-2 -2+1=-1 -2-2=-4 -2+3=1 -2-1=-3

    unordered_set<int> unset;
    for(int i=0;i<v.size();i++)
    {
        unset.insert(v[i]);
        
    }
    for(int i=0;i<v.size();i++)
    {
        int diff=x-v[i];
        if(unset.find(diff)!=unset.end())
        {
            ans=true;
        }
       
    }
    if(ans==true) cout<<"True";
    else cout<<"False";
    
    
    
    return 0;
}
//here we have taken the sum of all elements in the vactor with the X
//and check in the set that whether the difference exsist or not in it
//if it exsist then the pair which adds up the X is exsist in the vector
//TC-O(N) SC-O(1)