#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    bool flag = true;
    cin >> n;
    if (n > 1)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (flag)
            {
                cout << "I hate that ";
                flag = false;
            }
            else
            {
                cout << "I love that ";
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "I hate it ";
        flag = false;
    }
    else
    {
        cout << "I love it ";
        flag = true;
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
