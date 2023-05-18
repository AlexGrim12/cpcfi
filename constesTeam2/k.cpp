#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, k, p, mWaste = 1e9; // k-dinners p-marketSells r-amountOfRice n-SheterNeeds
    cin >> k >> p;
    int rice[p];
    for (int i = 0; i < p; i++)
        cin >> rice[i];
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        for (int j = 0; j < p; j++)
        {
            int bags = (n + rice[j] - 1) / rice[j];
            int waste = (bags * rice[j]) - n;
            mWaste = min(mWaste, waste);
        }
        cout << mWaste << endl;
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
