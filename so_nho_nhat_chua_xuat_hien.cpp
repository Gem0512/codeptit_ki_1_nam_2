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
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        //     sort(a, a + n);
        int m = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] != a[i] + 1)
            {
                m = 1;
                cout << a[i] + 1;
                break;
            }
        }
        if (m == 0)
            cout << a[n - 1] + 1;
        cout << endl;
    }
}