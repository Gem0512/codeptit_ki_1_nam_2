#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    ll s = 0;
    for (int i = 1; i <= n; i++)
    {
        ll p = 1;
        for (int j = 1; j <= i; j++)
        {
            p = p * j;
        }
        s += p;
    }
    cout << s;
}
