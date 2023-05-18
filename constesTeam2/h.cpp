#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    float n, x, y;
    int ans = 0;
    cin >> n;
    x = floor(n / 4);
    y = ceil(n / 4);
    if (2 * x + 2 * y > n)
    {
        y--;
    }
    ans = x * y;
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
