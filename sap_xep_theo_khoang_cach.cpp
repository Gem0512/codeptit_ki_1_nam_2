#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int x, n;
int dk(int a, int b)
{
    return abs(x - a) < abs(x - b);
}
void slove()
{
    cin >> n >> x;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stable_sort(a, a + n, dk);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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
