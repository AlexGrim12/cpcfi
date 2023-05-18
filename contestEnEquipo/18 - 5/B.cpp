#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n - 2; i += 2)
        {
            cout << s[i] << s[i + 1];
            if (n > 2)
            {
                cout << '-';
            }
        }
        cout << s[n - 2] << s[n - 1] << endl;
    }
    else
    {
        cout << s[0] << s[1] << s[2];
        if (n > 3)
        {
            cout << '-';
            for (int i = 3; i < n - 2; i += 2)
            {
                cout << s[i] << s[i + 1] << '-';
            }
            cout << s[n - 2] << s[n - 1] << endl;
        }
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
