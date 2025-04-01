// //roman to integer conversion LeetCode problem
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     string st="XLIII";
//     map<char,int>mp;
//     mp['I']=1;
//     mp['V']=5;
//     mp['X']=10;
//     mp['L']=50;
//     mp['C']=100;
//     mp['D']=500;
//     mp['M']=1000;
//     int sum=0,temp=0;
//     for(int i=0;i<st.size();i++)
//     {
//         if(i+1<st.size() && mp[st[i]]>=mp[st[i+1]])
//         {
//             sum=sum+mp[st[i]];
//         }
//         else
//         {
//             sum=sum-(mp[st[i]]);
//         }
//     }
//     //cout<<sum<<"\n";
   
   
//     cout<<sum<<"\n";

      
    
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int romanToInt(string st) {
    // Map to store Roman numerals and their corresponding integer values
    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sum = 0;

    // Traverse through the string
    for (int i = 0; i < st.size(); i++) {
        // Check if the next Roman numeral is greater than the current one
        if (i + 1 < st.size() && mp[st[i]] < mp[st[i + 1]]) {
            // Subtract the current value if it's smaller than the next one
            sum -= mp[st[i]];
        } else {
            // Otherwise, add the current value
            sum += mp[st[i]];
        }
    }

    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string st = "XLIII"; // Example Roman numeral
    int result = romanToInt(st);
    
    cout << result << "\n"; // Output the result
    return 0;
}
