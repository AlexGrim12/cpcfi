#include <bits/stdc++.h>

using namespace std;

int vecinoX[4] = {0, 0, 1, -1};
int vecinoY[4] = {1, -1, 0, 0};

int n, m, answer = 0;
bool visited[1000][1000] = {false};
char mapa[1000][1000];

bool valido(int y, int x)
{
    if (y < 0)
        return false;
    if (x < 0)
        return false;
    if (y >= n)
        return false;
    if (x >= m)
        return false;
    if (mapa[y][x] == '#')
        return false;
    return true;
}

void DFS(int y, int x)
{
    visited[y][x] = true;
    for (int i = 0; i < 4; i++)
    {
        int newX = x + vecinoX[i];
        int newY = y + vecinoY[i];
        if (valido(newY, newX))
        {
            if (!visited[newY][newX])
            {
                DFS(newY, newX);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mapa[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mapa[i][j] == '.' && !visited[i][j])
            {
                DFS(i, j);
                answer++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}
