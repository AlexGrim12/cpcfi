#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int aux = 0;
        scanf("%d", &aux);
        s.insert(aux);
    }
    if (s.size() > 2)
    {
        int maxi = 0;
        for (auto i : s)
        {
            maxi += i;
        }
        maxi = floor(maxi / s.size());
        printf("%d\n", maxi);
    }
    else if (s.size() == 2)
    {
        int num = 1e7;
        for (auto i : s)
        {
            num = min(num, i);
        }
        printf("%d\n", num);
    }
    else if (s.size() == 1)
    {
        int num = 1e7;
        for (auto i : s)
        {
            num = min(num, i);
        }

        if (num == 0)
            printf("0\n");
        else if (num == n)
        {
            printf("-1\n");
        }
        else
            printf("%d\n", num);
    }
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
