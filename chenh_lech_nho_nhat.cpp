#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[100005];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long min = 999999999;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] < min)
                min = a[i + 1] - a[i];
        }
        cout << min;
        cout << endl;
    }
}