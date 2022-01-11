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
        int vt;
        for (int i = n - 2; i >= 0; i++)
        {
            if (a[i] > a[i + 1])
            {
                vt = i;
                break;
            }
        }
        int max = 0;
        int v = -1;
        for (int i = vt + 1; i < n; i++)
        {
            if (a[i] < a[vt])
            {
                if (max < a[i])
                {
                    v = i;
                }
            }
        }
        swap(a[v], a[vt]);
        for (int i = vt; i < v; i++)
        {
            for (int j = i + 1; j < v; j++)
            {
                if (a[i] < a[j])
                    swap(a[i], a[j]);
            }
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
