#include <bits/stdc++.h>
using namespace std;
#define run() \
    int t;    \
    cin >> t; \
    while (t--)
main()
{
    run()
    {
        long n, min1 = 9999999, min2 = 9999999, dem = 1, k;
        cin >> n;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            k = a[0];
            if (k == a[i] && i > 0)
                dem++;
        }
        if (dem == n)
        {
            cout << "-1";
        }
        else
        {
            sort(a, a + n);
            min1 = a[0];
            for (int i = 1; i < n; i++)
            {
                if (min1 != a[i])
                {
                    min2 = a[i];
                    break;
                }
            }
            cout << min1 << " " << min2;
        }
        cout << endl;
    }
}