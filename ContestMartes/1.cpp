#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int w, d, h; // ROOM
    int a, b;    // LAPTOP
    int f, g;    // PROJECTOR
    int res = 0;
    scanf("%d %d %d", &w, &d, &h);
    scanf("%d %d %d %d", &a, &b, &f, &g);
    int x = 0, y = 0;
    x = abs(a - f);
    y = abs(b - g);
if (/* condition */)
{
    /* code */
}

    int distproy = min(min(g, abs(g - d)), min(f, abs(f - w))) * 2;

    res = x + y + distproy + h;

    printf("%d\n", res);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
