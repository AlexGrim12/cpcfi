#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, a;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != arr[i])
        {
            cout << i + 1 << endl;
            return;
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
