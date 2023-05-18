#include <bits/stdc++.h>

using namespace std;

bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    // Add your solution here
    float x, y, n;
    cin >> n;
    // dos numeros que x+y sean n

    x = ceil((n / 2));
    y = floor(n / 2);
    while (prime(x) || prime(y))
    {

        x++;
        y--;
    }
    cout << x << " " << y << endl;
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
