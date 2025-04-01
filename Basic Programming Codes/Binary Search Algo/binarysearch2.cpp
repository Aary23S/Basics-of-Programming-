//finding the element in array
//tc->O(logN) sc->O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);

        int k;
        cin>>k;
        vector<int>v={4,7,7,5,10,20,25,10,30,40,50};
        int l=0,r=v.size()-1;
        int mid=(l+r)/2;
        while(l<=r)
        {
            if(v[mid]==k)
            {
                cout<<"Num found at :"<<mid<<"\n";
                break;
            }
            else
            {
                if(v[mid]<k)
                {
                    l=mid+1;
                    mid=(l+r)/2;
                }
                else if(v[mid]>k)
                {
                    r=mid-1;
                    mid=(l+r)/2;
                }
            }
        }

return 0;
}
 