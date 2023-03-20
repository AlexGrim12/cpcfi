#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, k, tmp = 0, ans = 1e9, index = 0, c;
    cin >> n >> k;
    vector<int> h;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        h.push_back(c);
    }

    for (int i = k - 1; i < n; i++)
    {
        for (int j = i; j > k; j--)
        {
            tmp += h[j];
            if (tmp < ans)
            {
                ans = tmp;
                index = k;
            }
        }
        tmp = 0;
    }
    cout << index << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
