#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, s;
        cin >> n;
        int a[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        s = (n * (n + 1)) / 2;
        cout << s - sum << endl;
    }
}