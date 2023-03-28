#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, ans = 0, of = 0, crime = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            of = of + a[i];
        else
        {
            crime++;
            if (of - crime < 0)
            {
                ans++;
                of = 0;
                crime = 0;
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
