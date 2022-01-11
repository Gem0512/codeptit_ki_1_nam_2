#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int a[1000005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = d; i < n; i++)
            cout << a[i] << " ";
        for (int i = 0; i < d; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
