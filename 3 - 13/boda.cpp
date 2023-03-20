#include <bits/stdc++.h>

using namespace std;

void solve(int k, int c, vector<vector<int>> &prices)
{
    vector<vector<int>> dp;
    for (int i = 0; i < prices[0][0]; i++)
    {
        dp[0][k - prices[0][i]] = 1;
    }
    int rowA = 0;
    int rowB = 1;
    for (int row = 0; row < c; row++)
    {
        for (int presupuesto_restante = 0; presupuesto_restante < c; presupuesto_restante++)
        {
            if (dp[row][presupuesto_restante] == 1)
            {
                for (int i = 1; i <= prices[row][0]; i++)
                {
                    if (presupuesto_restante = prices[row][i] >= 0)
                    {
                        dp[rowB][presupuesto_restante - prices[row][i]] = 1;
                    }
                }
            }
            dp[rowA][presupuesto_restante] = 0;
        }
        int ans = 0;
        for (ans = 0; ans <= k && dp[c - 1][ans] == 0; ans++)
        {
            cout << k - ans << endl;
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
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        // Add your solution here
        int k, c;
        cin >> k >> c;
        vector<vector<int>> v(c);
        for (int i = 0; i < c; i++)
        {
            int tmp;
            cin >> tmp;
            v[i].push_back(tmp);
            for (int j = 0; j < v[i][0]; j++)
            {
                cin >> tmp;
                v[i].push_back(tmp);
            }
        }
        solve(k, c, v);
    }
}
