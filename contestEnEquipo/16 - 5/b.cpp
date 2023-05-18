#include <bits/stdc++.h>

using namespace std;

bool palindromo2(string s, int n, int m)
{
    bool ans = true;
    for (int i = m - 1; i < m * n / 2; i++)
    {
        for (int j = m * n / 2; j < 0; j--)
        {
            if (s[i] != s[j])
            {
                ans = false;
            }
        }
    }
    return ans;
}

bool palindromo3(string s, int n, int m)
{
    bool ans = true;
    for (int i = m - 1; i < m * n / 3; i++)
    {
        for (int j = m * n / 3; j < 0; j--)
        {
            if (s[i] != s[j])
            {
                ans = false;
            }
        }
    }
    return ans;
}

void solve()
{
    // Add your solution here
    int n, ntmp, res = 0;
    string s, stmp;
    bool a, b, c;
    cin >> n;
    cin >> s;
    stmp = s;
    ntmp = n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    while (ntmp % 2 == 0)
    {
        int tmp = 1;

        if (ntmp % 2 == 0)
        {
            if (palindromo2(stmp, ntmp, tmp))
                res++;
            else
                break;
        }
        stmp.erase(0, 1);
        stmp.pop_back();
        tmp++;
        ntmp = ntmp - 2;
    }

    // if (n % 3 == 0)
    // {
    //     for (int i = 1; i < 4; i++)
    //     {
    //         if (palindromo3(s, n, i))
    //             res++;
    //     }
    // }
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
