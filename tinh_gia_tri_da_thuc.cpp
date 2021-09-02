#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
ll POW(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 0)
        return POW(a * a % MOD, b / 2) % MOD;
    else
        return a * POW(a * a % MOD, b / 2) % MOD;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        if (n == 0)
        {
            cout << "0";
        }
        else
        {
            vector<ll> a(n);
            ll tong = 0;
            for (int i = n - 1; i >= 0; i--)
                cin >> a[i];
            for (int i = n - 1; i >= 0; i--)
            {
                tong = tong + a[i] * POW(x, i) % MOD;
                tong = tong % MOD;
            }
            cout << tong;
        }
        cout << endl;
    }
}
