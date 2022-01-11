#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long m = (x * y) / __gcd(x, y);
        long long m1 = (m * z) / __gcd(m, z);
        long long p = pow(10, n - 1);
        long long m2 = p / m1;
        if (p % m1 != 0)
            m2++;
        long long k = m2 * m1;
        if (k > 10 * p)
            cout << -1 << endl;
        else
            cout << k << endl;
    }
    return 0;
}