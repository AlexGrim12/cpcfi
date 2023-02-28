#include <bits/stdc++.h>

using namespace std;

void solve(int n, int x, vector<int> v)
{
    // Add your solution here
    int r = n - 1;
    int l = 0;
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            cout << "found at " << mid << endl;
            return;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
