#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, ans = 0;
    cin >> n;
    int h[n], a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (h[i] == a[j])
            {
                ans++;
            }
        }
    }
    cout << ans;
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
