#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    bool flag = true;
    vector<int> v; // zi
    for (int i = 0; i < n; i++)
    {
        int aux = 0;
        float tmp = 0, med = 0;
        scanf("%d", aux);
        v.push_back(aux);
        tmp += aux;
        med = floor(tmp / n);
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = n; j < n / 2; j--)
        {
            if (v[i] != v[j])
            {
                flag = false;
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
    scanf("%d", &tc);
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
