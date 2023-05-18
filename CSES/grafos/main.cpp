#include <bits/stdc++.h>

using namespace std;

int n = 7;
vector<bool> visited(n, false);
vector<vector<int>> adj(n);

void dfs(int s)
{
    if (visited[s])
        return;

    visited[s] = true;

    for (int i = 0; i < adj[s].size(); i++)
    {
        int u = adj[s][i];
        cout << u << endl;
        dfs(u);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    adj[1].push_back(2);

    adj[1].push_back(3);

    adj[5].push_back(6);

    for (int i = 1; i < 7; i++)
    {
        if (!visited[i])
        {
            cout << i << endl;
            dfs(i);
            cout << endl;
        }
    }

    return 0;
}
