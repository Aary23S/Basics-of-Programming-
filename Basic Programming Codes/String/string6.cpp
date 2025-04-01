#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char X='x';
        //cin >> X;
        
        long long n = s.length();
        vector<char> v(n,0);
        
        long long tot = 2;
        v.push_back(s[0]);
        if(s.size()==1)
        v.push_back(X);
        

        for (int i = 1; i < n; i++)
        {
            if (s[i] != v.back())
            {
                v.push_back(s[i]);
                tot += 2;
            }
            else if (s[i] == v.back())
            {
                v.push_back(X);
                tot += 2;
                v.push_back(s[i]);
                tot += 2;
            }
        }
        //cout << v << "\n";
        
        for(int i=0;i<v.size();i++)
        cout<<v[i];
        
        cout<<"\n";
    }

    return 0;
}
