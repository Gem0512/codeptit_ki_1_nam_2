#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void slove()
{
    int n;
    cin >> n;
    int a[n + 5][n + 5];
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            h += a[i][j];
        }
    }
    int max1 = 0;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            k = k + a[i][j];
        }
        if (k > max1)
            max1 = k;
    }
    int max2 = 0;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            k = k + a[j][i];
        }
        if (k > max2)
            max2 = k;
    }
    int m = max(max1, max2);
    cout << m * n - h;
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
