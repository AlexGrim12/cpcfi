#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s;
    cin >> s;
    int n = s.length();
    int a[n] = {0}, tmp = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        tmp = (int(s[i]) - 65);
        cout << tmp << endl;
        a[tmp]++;
        cout << a[tmp] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            if (a[i] % 2 == 0)
            {
                a[i] = a[i] / 2;
                printf("%c", i + 65);
            }
            else if (flag)
            {
                tmp = a[i];
                flag = false;
            }
            else
            {
                cout << "NO SOLUTION" << endl;
                        }
        }
    }
    printf("%c", a[tmp]);
    for (int i = n; i < 0; i++)
    {
        if (a[i] != 0)
        {
            printf("%c", a[i]);
        }
    }
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
