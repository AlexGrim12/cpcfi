#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int a, b, c;
    bool flag = false;
    cin >> a >> b >> c;
    if (a + b == c)
        flag = true;
    else if (a + c == b)
        flag = true;
    else if (c + b == a)
        flag = true;

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
