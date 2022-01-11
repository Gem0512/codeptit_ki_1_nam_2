#include <bits/stdc++.h>
using namespace std;
int a[1005], b[1005], c[1005], d[1005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int k = 0, h = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2)
            {
                b[k] = a[i];
                k++;
            }
            if (i >= n / 2)
            {
                c[h] = a[i];
                h++;
            }
        }
        int l = 0;
        for (int i = h - 1; i >= 0; i--)
        {
            d[l] = c[i];
            l++;
        }
        for (int i = 0; i < n / 2; i++)
        {
            cout << d[i] << " " << b[i] << " ";
        }
        if (n % 2 != 0)
            cout << d[l - 1];
        cout << endl;
    }
}