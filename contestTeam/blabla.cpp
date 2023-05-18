#include <bits/stdc++.h>
using namespace std;

pair<int, int> inicio, fin;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
string dir = "DRUL";

int main()
{
    int R, C;
    scanf("%d %d", &R, &C);
    char mapa[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            char c;
            cin >> c;
            mapa[i][j] = c;
            if (c == 'E')
            {
                fin = make_pair(i, j);
            }
        }
    }

    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        x = x - 1;
        y = y - 1;
        if (mapa[x][y] == '.')
        {
            int rev[R][C] = {0};
            bool ver[R][C] = {false};
            queue<pair<int, int>> camino;
            inicio = make_pair(x, y);
            camino.push(inicio);
            ver[x][y] = true;

            while (!camino.empty())
            {
                pair<int, int> a = camino.front();
                camino.pop();
                for (int i = 0; i < 4; i++)
                {
                    pair<int, int> v = make_pair(a.first + dx[i], a.second + dy[i]);
                    if (v.first < 0 || v.second < 0 || v.first >= R || v.second >= C)
                    {
                        continue;
                    }
                    if (mapa[v.first][v.second] == '#' || mapa[v.first][v.second] == 'X')
                    {
                        continue;
                    }
                    if (ver[v.first][v.second])
                    {
                        continue;
                    }
                    ver[v.first][v.second] = true;
                    rev[v.first][v.second] = i;
                    camino.push(v);
                }
            }
            if (ver[fin.first][fin.second])
            {
                vector<int> pasos;
                while (fin != inicio)
                {
                    int paso = rev[fin.first][fin.second];
                    pasos.push_back(paso);
                    fin = make_pair(fin.first - dx[paso], fin.second - dy[paso]);
                }
                reverse(pasos.begin(), pasos.end());

                printf("%c\n", dir[pasos[0]]);
            }
            else
            {
                printf("?\n");
            }
        }
        else if (mapa[x][y] == '#')
        {
            printf("W\n");
        }
        else if (mapa[x][y] == 'X')
        {
            printf("X\n");
        }
        else if (mapa[x][y] == 'E')
        {
            printf("E\n");
        }
    }
    return 0;
}
