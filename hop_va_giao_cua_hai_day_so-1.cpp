#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void slove()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5], b[m + 5], c[n + m + 5], d[100005] = {0};
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[k++] = a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        c[k++] = b[i];
    }
    sort(b, b + m);
    sort(c, c + n + m);
    for (int i = 0; i < n + m; i++)
    {
        d[c[i]]++;
    }
    int v[100005] = {0};
    for (int i = 0; i < n + m; i++)
    {
        if (d[c[i]] >= 1 && v[c[i]] == 0)
            cout << c[i] << " ";
        v[c[i]] = 1;
    }
    cout << endl;
    int e[100005] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && e[a[i]] == 0)
            {
                cout << a[i] << " ";
                e[a[i]] = 1;
                break;
            }
        }
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
