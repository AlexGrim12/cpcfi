#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s;
    int n;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    auto ip = unique(s.begin(), s.end());
    s.resize(distance(s.begin(), ip));

    if (s == "meow")
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
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
