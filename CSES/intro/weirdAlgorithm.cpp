#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    long long n;
    cin >> n;

    cout << n << " ";

    while (n > 1)
    {
        if (n % 2 != 0)
        {
            n = (n * 3) + 1;
            cout << n << " ";
        }
        else
        {
            n = n / 2;
            cout << n << " ";
        }
    }
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
