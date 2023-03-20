#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s;
    int n, ans = 0;
    vector<char> al = {'a',
                       'b',
                       'c',
                       'd',
                       'e',
                       'f',
                       'g',
                       'h',
                       'i',
                       'j',
                       'k',
                       'l',
                       'm',
                       'n',
                       'o',
                       'p',
                       'q',
                       'r',
                       's',
                       't',
                       'u',
                       'v', 'w',
                       'x',
                       'y',
                       'z'};
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == al[j])
            {
                if (j > ans)
                {
                    ans = j;
                }
            }
        }
    }
    cout << ans + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
