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
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int v = 0, z = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v % 2 == 0)
            {
                cout << a[n - z - 1] << " ";
                v = 1;
            }
            else
            {
                cout << a[z] << " ";
                z++;
                v = 0;
            }
        }
        cout << endl;
    }
}
