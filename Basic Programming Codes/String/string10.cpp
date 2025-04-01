// check if the string is the roated by 2 position
#include <bits/stdc++.h>
using namespace std;
bool solve(string clockwise, string ans)
{

    int i = 1;
    while (i <= 2)
    {
        char temp = clockwise[clockwise.size() - 1];
        for (int i = clockwise.size() - 2; i >= 0; i--)
        {
            clockwise[i + 1] = clockwise[i];
        }
        clockwise[0] = temp;
        i++;
    }

    // cout << clockwise << "\n";
    if (clockwise == ans)
        return true;
    else
        return false;
}
bool solve1(string anticlockwise, string ans)
{
    string str = anticlockwise.substr(0, 2);
    string temp;
    for (int i = 0; i < anticlockwise.size(); i++)
    {
        anticlockwise[i] = anticlockwise[i + 2];
    }
    for (int i = 0; i < 2; i++)
        anticlockwise.pop_back();
    temp = anticlockwise + str;
    // cout << temp << "\n";
    if (temp == ans)
        return true;
    else
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string st = "aary";
    string ans = "yraa";
    string clockwise = st, anticlockwise = st;
    bool ans1 = solve(clockwise, ans);
    if (ans1 == true)
        cout << "YES" << "\n";
    else
    {
        bool ans2 = solve1(anticlockwise, ans);
        if (ans2 == 1)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}