#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int sum(int n)
{
    return (n * (n + 1)) / 2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        long mod = n % k;
        long tong;
        if (n < k)
        {
            tong = sum(n);
        }
        else
        {
            tong = sum(k - 1) * (n / k) + sum(mod);
        }
        if (tong == k)
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}
