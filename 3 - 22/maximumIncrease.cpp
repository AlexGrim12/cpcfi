#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, ans = 1, tmp = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > a[i - 1] && i != 0)
        {
            tmp++;
            ans = max(ans, tmp);
        }
        else
        {
            tmp = 1;
            ans = max(ans, tmp);
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
