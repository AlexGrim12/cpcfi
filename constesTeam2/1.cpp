#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, ans = 0, sum1 = 0, sum2 = 0;

    scanf("%lld", &n);

    vector<int> gifs(n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &gifs[i]);
    }

    ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        sum1 = 0;
        sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                sum1 ^= gifs[j];
            else
                sum2 ^= gifs[j];
        }
        ans = max(ans, sum1 + sum2);
    }

    printf("%lld\n", ans);
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    long long tc = 1;
    // std::cin>>tc;
    for (long long t = 1; t <= tc; t++)
        solve();
}
