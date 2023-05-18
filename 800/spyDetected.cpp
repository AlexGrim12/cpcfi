#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (a[0] != a[1] && a[1] == a[2])
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {

        if (a[i] != a[i + 1] && a[i] != a[i - 1])
        {
            cout << i + 1 << endl;
            return;
        }
    }
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
