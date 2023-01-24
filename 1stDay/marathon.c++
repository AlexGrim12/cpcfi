#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long a, b, c, d;
        scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
        printf("%d\n", (b > a) + (c > a) + (d > a));
    }

    return 0;
}