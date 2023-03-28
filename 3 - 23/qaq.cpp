#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int ans = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'Q')
        {
            for (int j = i; j < s.length(); j++)
            {
                if (s[j] == 'A')
                {
                    for (int k = j; k < s.length(); k++)
                    {
                        if (s[k] == 'Q')
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
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
