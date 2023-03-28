#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int tmp = 0, k = 0;
    bool nPal;
    vector<int> rep;
    vector<string> car;
    string s, ans;

    cin >> ans;
    s = ans;

    sort(ans.begin(), ans.end());

    // contar las letras q se repiten
    for (int i = 0; i < ans.length(); i++)
    {
        if (ans[i] == ans[i - 1])
        {
            tmp++;
        }
        else
        {
            car[k].push_back(ans[i]);
            rep[k] = tmp;
            tmp = 0;
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (rep[i] % 2 == 0)
        {
            for (int j = 0; j < rep[i] / 2; j++)
            {
                cout << car[i];
            }
        }
        else
        {
            if (nPal)
            {
                cout << "NO SOLUTION" << endl;
                return;
            }
            tmp = i;
        }
    }
    for (int j = 0; j < (rep[i] / 2); j++)
    {
        cout << car[tmp];
    }
    for (int i = k; i < 0; i--)
    {
        if (rep[i] % 2 == 0)
        {
            for (int j = 0; j < rep[i] / 2; j++)
            {
                cout << car[i];
            }
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
