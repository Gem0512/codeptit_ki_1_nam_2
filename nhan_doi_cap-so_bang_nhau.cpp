#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, a[100001];
void nhap()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
}
void in()
{
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i + 1] != 0 && a[i] == a[i + 1])
        {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
            cout << a[i] << " ";
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
            cout << a[i] << " ";
    }
    cout << endl;
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