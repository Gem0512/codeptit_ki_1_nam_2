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
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int min = 9999;
        for (int i = 0; i < n - 1; i++)
        {
            if (min > a[i + 1] - a[i])
                min = a[i + 1] - a[i];
        }
        cout << min;
        cout << endl;
    }
}
