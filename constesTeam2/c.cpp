#include <bits/stdc++.h>

void solve()
{
    long long n, q, k, l, r, x, tot;
    std::cin >> n >> q;
    std::vector<float> a;
    for (int i = 0; i < n; i++)
    {
        long long ai;
        std::cin >> ai;
        a.push_back(ai);
    }
    for (int i = 0; i < q; i++)
    {
        long long cand = 0;
        std::vector<float> ac;
        std::cin >> k;
        for (int j = 0; j < k; j++)
        {
            std::cin >> l >> r >> x;
            for (long long t = l - 1; t < r; t++)
            {
                for (long long m = 0; m < x; m++)
                {
                    ac.push_back(a.at(t));
                    cand++;
                }
            }
        }
        sort(ac.begin(), ac.end());
        if (cand % 2 == 1)
            std::cout << ac[cand / 2] << '\n';
        else
            std::cout << (ac[(cand / 2) - 1] + ac[(cand / 2)]) / 2 << '\n';
        ac.clear();
    }
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
