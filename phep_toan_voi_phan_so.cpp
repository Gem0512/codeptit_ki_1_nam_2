#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct PhanSo
{
    ll tu, mau;
};
void process(PhanSo a, PhanSo b)
{
    ll e = a.tu * b.mau + a.mau * b.tu;
    ll f = a.mau * b.mau;
    ll h = __gcd(e, f);
    cout << (e / h) * (e / h) << "/" << (f / h) * (f / h) << " ";
    ll m = a.tu * b.tu * (e / h) * (e / h);
    ll n = a.mau * b.mau * (f / h) * (f / h);
    ll s = __gcd(m, n);
    cout << m / s << "/" << n / s << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}
