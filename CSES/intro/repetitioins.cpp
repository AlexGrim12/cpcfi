#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int a = 0, c = 0, g = 0, t = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int j = i;
        if (s[i] == 'A')
        {
            a = 0;
            while (s[i] == 'A')
            {
                a++;
                i++;
            }
        }
        if (s[i] == 'C')
        {
            c = 0;
            while (s[i] == 'C')
            {
                c++;
                i++;
            }
        }
        if (s[i] == 'G')
        {
            g = 0;
            while (s[i] == 'G')
            {
                g++;
                i++;
            }
        }
        if (s[i] == 'T')
        {
            c = 0;
            while (s[i] == 'T')
            {
                t++;
                i++;
            }
        }
    }
    if (a > c && a > g && a > t)
        cout << a << endl;
    else if (c > g && c > t)
        cout << c << endl;
    else if (g > t)
        cout << g << endl;
    else
        cout << t << endl;
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
