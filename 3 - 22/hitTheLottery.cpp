#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, coins[5] = {100, 20, 10, 5, 1}, ans = 1;
    cin >> n;
    while (n > 0)
    {
        for (int i = 0; i < 5; i++)
        {
            while ((n - coins[i]) >= coins[i])
            {
                n = n - coins[i];
                ans++;
                cout << n << endl;
                cout << coins[i] << endl;
                cout << ans << endl;
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
