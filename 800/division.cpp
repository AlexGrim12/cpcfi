#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int rating;
    cin >> rating;
    cout << "Division ";
    if (rating <= 1399)
        cout << "4" << endl;
    else if (rating >= 1400 && rating <= 1599)
        cout << "3" << endl;
    else if (rating >= 1600 && rating <= 1899)
        cout << "2" << endl;
    else if (rating >= 1900)
        cout << "1" << endl;
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
