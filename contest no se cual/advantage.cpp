#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, a, ans;
    vector<int> s, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        s.push_back(a);
        b.push_back(a);
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (b[n - 1] == s[i])
        {
            cout << s[i] - b[n - 2] << ' ';
        }
        else
        {
            cout << s[i] - b[n - 1] << ' ';
        }
    }
    cout << endl;
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
