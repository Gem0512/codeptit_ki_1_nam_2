#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, x, y;
        cin >> a >> x >> y;
        long long z = __gcd(x, y);
        while (z--)
            cout << a;
        cout << endl;
    }
}