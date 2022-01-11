#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void tong(ll a, ll b)
{
    cout << "Tong " << a + b << endl;
}
void hieu(ll a, ll b)
{
    cout << "Hieu " << a - b << endl;
}
void tich(ll a, ll b)
{
    cout << "Tich " << a * b << endl;
}
void thuong(ll a, ll b)
{
    cout << "Thuong " << a / b << endl;
}
void dtich(ll a, ll b)
{
    cout << "Dien tich " << a * b << endl;
}
void chuvi(ll a, ll b)
{
    cout << "Chu vi " << 2 * (a + b);
}
void slove()
{
    ll a, b;
    cin >> a >> b;
    tong(a, b);
    hieu(a, b);
    tich(a, b);
    thuong(a, b);
    dtich(a, b);
    chuvi(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}
//Code by TN