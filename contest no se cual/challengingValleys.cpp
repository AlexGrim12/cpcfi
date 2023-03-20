#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, minor = 1e9;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    // si el punto mas bajo se repite y no son consecutivos, entonces no es un valle
    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[n - 2] == a[i])
        {
            if (a[i] == a[i - 1] || a[i] == a[i + 1])
            {
                continue;
            }
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (v[n - 1] == a[i])
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                cout << "YES" << endl;
                return;
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
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
