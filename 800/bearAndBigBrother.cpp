#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int a, b, ans = 0;
    cin >> a >> b;
    do
    {
        ans++;
        a = a * 3;
        b = b * 2;
    } while (a < b);
    if (a == b)
    {
        ans++;
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
