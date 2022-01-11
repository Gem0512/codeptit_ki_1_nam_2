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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k = 0;
        int max = a[1] - a[0];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] > a[i])
                {
                    if (max < a[j] - a[i])
                        max = a[j] - a[i];
                    k = 1;
                }
            }
        }
        if (k == 0 || max < 0)
            cout << "-1";
        else
            cout << max;
        cout << endl;
    }
}
