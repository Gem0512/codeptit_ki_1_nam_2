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
        int n, k = 0, v = 0;
        cin >> n;
        int a[n], b[100005] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
            if (b[a[i]] > 1 && v == 0)
                k = a[i], v = 1;
        }
        if (k != 0)
            cout << k;
        else
            cout << "-1";
        cout << endl;
    }
}