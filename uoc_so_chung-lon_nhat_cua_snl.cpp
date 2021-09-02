#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        ll a;
        cin >> a >> s;
        ll x = 0;
        for (int i = 0; i < s.size(); i++)
        {
            x = (x * 10 + (s[i] - 48)) % a;
        }
        ll c = __gcd(x, a);
        cout << c;

        cout << endl;
    }
}
