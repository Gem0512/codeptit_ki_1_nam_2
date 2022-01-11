#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
bool snt(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool check(ll n)
{
    ll x = sqrt(n);
    if (x * x == n && snt(x))
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        ll dem = 0;
        for (ll i = 4; i <= n; i++)
        {
            if (check(i))
                dem++;
        }
        cout << dem;
        cout << endl;
    }
}
