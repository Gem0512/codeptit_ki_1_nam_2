#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[100005];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        while (k--)
        {
            int c, b;
            int sum = 0;
            cin >> c >> b;
            for (int i = c - 1; i <= b - 1; i++)
                sum += a[i];
            cout << sum;
            cout << endl;
        }
    }
}
