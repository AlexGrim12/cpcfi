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
    int i, j;
    scanf("%d %d", &i, &j);
    // encontrar si i y j sin primos
    bool isPrimei = true;
    bool isPrimej = true;
    if (i == j)
    {
        isPrimei = prime(i);
        if (isPrimei)
        {
            printf("1");
            return;
        }
        else
        {
            printf("0");
            return;
        }
    }
    else
    {
        isPrimei = prime(i);
        isPrimej = prime(j);
    }
    if (isPrimei && isPrimej)
    {
        printf("2");
        return;
    }
    else if (isPrimei || isPrimej)
    {
        printf("1");
        return;
    }
    else
    {
        printf("0");
        return;
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
