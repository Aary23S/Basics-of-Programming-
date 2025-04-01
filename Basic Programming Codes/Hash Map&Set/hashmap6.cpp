//minimum opretaions to make all elements of the array same

//brute force approch 
//tc->O(n2) sc->O(1)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int max=0,cnt=1;
    vector<int>v={1,2,4,3,1,1,2,2,2};
    sort(v.begin(),v.end());
    int i=0,j=0;
    while(i<v.size())
    {
        cnt=1;
        //int j=i;
        while(j<v.size())
        {
            if(v[i]==v[j])
            {
                cnt++;
            }
        j++;
        }
        if(max<cnt)
        {
            max=cnt;
        }

    i++;  
    }
    
    //cout<<max<<"\n";
    cout<<"Minimum opretions required to perform :"<<(v.size()-max)<<endl;
return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v={1,4,2,5,3,2,2};//n=7 mfreq=3
    unordered_map<int,int> umap;
    int mcnt=0;
    for(int i=0;i<v.size();i++)
    {
        umap[v[i]]++;
    }   
    for(auto it:umap)
    {
         
        if(it.second>mcnt)
        mcnt=it.second;
    }
    cout<<"Minimum opretions required :"<<(v.size()-mcnt);
    return 0;
}