#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, a[1000001];

void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void in()
{
    ll MAX = a[0];
    ll tong = a[0];
    for (int i = 1; i < n; i++)
    {
        MAX = max(a[i], MAX + a[i]);
        tong = max(tong, MAX);
    }
    cout << tong << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
}