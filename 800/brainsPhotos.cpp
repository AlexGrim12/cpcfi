#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int m, n;
    bool flag = false;
    cin >> m >> n;
    char mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'C' || mat[i][j] == 'M' || mat[i][j] == 'Y')
            {
                flag = true;
            }
        }
    }
    if (flag)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
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
