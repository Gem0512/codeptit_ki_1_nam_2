#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5][n + 5];
        int x = 0;
        int b[10005];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                b[x] = a[i][j];
                x++;
            }
        }
        sort(b, b + x);
        cout << b[k - 1];
        cout << endl;
    }
}