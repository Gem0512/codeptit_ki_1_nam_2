#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int a[1000005], b[1000005];
void slove()
{
    int n, m;
    cin >> n >> m;
    int c[1000005] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[a[i]]++;
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < c[b[i]]; j++)
        {
            cout << b[i] << " ";
        }
        c[b[i]] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        if (c[a[j]] != 0)
            cout << a[j] << " ";
    }
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