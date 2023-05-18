#include <bits/stdc++.h>

using namespace std;

int vecinoX[4] = {0, 0, 1, -1};
int vecinoY[4] = {1, -1, 0, 0};

int n, m, answer = 0;
bool visited[1000][1000] = {false};
char mapa[1000][1000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
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
                
            }
        }
    }
}
