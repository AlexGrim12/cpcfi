#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int k, n, w, ans = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        ans += (i * k);
    }
    if (ans <= n)
        cout << 0;
    else
        cout << ans - n;
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
