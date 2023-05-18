#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, m;
    scanf("%d %d", &n, &m);
    if (n % 2 == 0 && m % 2 == 0)
    {
        printf("NO\n");
    }
    else if (n == m)
    {
        printf("NO\n");
    }
    else if (n > 1 && n < m)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}

int main()
{
    int tc = 1;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
