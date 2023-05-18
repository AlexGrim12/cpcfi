#include <bits/stdc++.h>

void solve()
{
    double x, y, c, n, max = 0, b;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y >> c;
        b = sqrt(pow(x, 2) + pow(y, 2)) * c;
        if (b > max)
            max = b;
    }
    std::cout << max;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    int tc = 1;
    // std::cin>>tc;
    for (int t = 1; t <= tc; t++)
        solve();
}
