#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

int lp[MAXN + 1], primes[MAXN / 10], cnt = 0;

void sieve()
{
    // Eratóstenes sieve para hacerlo mas eficiente
    for (int i = 2; i <= MAXN; i++)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            primes[cnt++] = i;
        }
        for (int j = 0; j < cnt && primes[j] <= lp[i] && i * primes[j] <= MAXN; j++)
        {
            lp[i * primes[j]] = primes[j];
        }
    }
}

void solve()
{
    int i, j;
    cin >> i >> j;
    // contador de primos en el rango
    int count = upper_bound(primes, primes + cnt, j) - lower_bound(primes, primes + cnt, i);
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
    return 0;
}
