#include <bits/stdc++.h>

void solve()
{
    long int n, m, k, c, c1[10000], len = 0;
    bool flag, flag1;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++)
    {

        std::cin >> k;
        flag1 = true;
        for (int j = 0; j < k; j++)
        {
            std::cin >> c;
            flag = true;
            for (int l = 0; l < len; l++)
            {
                if (c == c1[l])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true and flag1 == true)
            {
                c1[len] = c;
                len++;
                flag1 = false;
            }
        }
    }
    std::cout << m - len;
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
