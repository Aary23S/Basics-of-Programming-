// sort the sentence according to the number at the end of it
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s = "is2 sentence4 this1 a3";
    string str=" ";
    vector<string> temp(10);
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            int idx = str[str.size() - 1] - '0';
            str.pop_back();
            temp[idx] = str;
            cnt++;
            str.clear();
        }
        else
        {
            str += s[i];
        }
    }
    int idx = str[str.size() - 1] - '0';
    str.pop_back();
    temp[idx] = str;
    str.clear();
    cnt++;
    for (int i = 1; i <= cnt; i++)
    {
        str += temp[i];
        str += ' ';
    }
    str.pop_back();
    cout<<str;
    return 0;
}