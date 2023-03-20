#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s;
    cin >> s;
    int numbers[1001], j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            numbers[j++] = s[i] - '0';
        }
    }
    sort(numbers, numbers + j);
    for (int i = 0; i < j; i++)
    {
        cout << numbers[i];
        if (i == j - 1)
        {
            break;
        }
        cout << "+";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
