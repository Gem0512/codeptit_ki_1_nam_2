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
        int k, n;
        cin >> k >> n;
        int a[n * k + 5];
        for (int i = 0; i < n * k; i++)
            cin >> a[i];
        sort(a, a + n * k);
        for (int i = 0; i < n * k; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
