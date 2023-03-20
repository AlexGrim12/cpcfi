#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, tmp = 0, ans = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        tmp = tmp - a[i] + b[i];
        if (tmp > ans)
        {
            ans = tmp;
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
