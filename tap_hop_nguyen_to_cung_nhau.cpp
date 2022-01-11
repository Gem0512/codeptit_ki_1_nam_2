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
void slove()
{
    ll n, m;
    cin >> n >> m;
    ll k = n * (n + 1) / 2;
    if (snt(m) == 0 || (m % 2 == 0 && k % 2 != 0) || (m % 2 != 0 && k % 2 == 0))
        cout << "No";
    else if ((k - m) / 2 > 0 && (k + m) / 2 > 0 && __gcd((k + m) / 2, (k - m) / 2) == 1)
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}
