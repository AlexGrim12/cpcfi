#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int matrix[5][5], ans = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                if (i > 2)
                    ans += i - 2;
                else if (i < 2)
                    ans += i + 2;
                if (j > 2)
                    ans += i - 2;
                else if (j < 2)
                    ans += i + 2;
            }
        }
    }
    cout << ans + 1 << endl;
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
