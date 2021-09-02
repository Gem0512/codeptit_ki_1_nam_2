#include <bits/stdc++.h>
using namespace std;
long long mu(long long a, long long b, long long p)
{
    if (b == 0)
        return 1;
    long long x = mu(a, b / 2, p) % p;
    if (b % 2 == 1)
        return (x * x * a) % p;
    return (x * x) % p;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, p;
        cin >> x >> y >> p;
        cout << mu(x, y, p) % p;
        cout << endl;
    }
}