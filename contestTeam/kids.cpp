#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    long long n;
    cin >> n;
    vector<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        ans.push_back(n);
    }
    if (ans.size() < 2)
    {
        cout << "-1\n";
    }
    else
    {
        int divisors = 1;
        for (int i : ans)
        {
            int exponent = 0;
            while (n % i == 0)
            {
                exponent++;
                n /= i;
            }
            divisors *= exponent + 1;
        }
        cout << divisors << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
