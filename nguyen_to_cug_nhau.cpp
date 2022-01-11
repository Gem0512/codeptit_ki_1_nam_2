#include <bits/stdc++.h>
using namespace std;
#define run() \
    int t;    \
    cin >> t; \
    while (t--)
int nto(int n)
{
    if (n < 2)
        return 0;
    if (n > 2)
    {
        if (n % 2 == 0)
            return 0;
    }
    if (n == 2)
        return 1;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
main()
{
    run()
    {
        int n, dem = 0;
        cin >> n;
        for (int i = 1; i < n; i++)
        {
            if (__gcd(n, i) == 1)
                dem++;
        }
        if (nto(dem))
            cout << "1\n";
        else
            cout << "0\n";
    }
}