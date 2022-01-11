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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
                dem++;
            }
        }
        for (int i = 0; i < n - dem; i++)
            cout << "0 ";
        cout << endl;
    }
}
