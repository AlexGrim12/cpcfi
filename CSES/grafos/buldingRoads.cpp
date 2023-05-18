#include <bits/stdc++.h>

using namespace std;

int n, m, ans = 0; // n - cities, m - roads
vector<bool> visited(1e7 + 3, false);
vector<vector<int>> adj(1e7 + 3);
vector<int> linea;

void dfs(int s)
{
    if (visited[s])
        return;

    visited[s] = true;

    for (int i = 0; i < adj[s].size(); i++)
    {
        int u = adj[s][i];
        // cout << u << endl;
        if (!visited[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m; // n - cities, m - roads
    for (int i = 0; i < m; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        adj[temp1].push_back(temp2);
        adj[temp2].push_back(temp1);
    }
    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
        {
            ans++;
            dfs(i);
            linea.push_back(i);
        }
    }
    if (m != 1)
    {
        ans--;
    }

    cout << ans << endl;
    for (int i = 0; i < ans; i++)
    {
        cout << linea[i] << " " << linea[i + 1] << endl;
    }
}
