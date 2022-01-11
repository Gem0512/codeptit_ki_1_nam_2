#include <bits/stdc++.h>
using namespace std;
int a[10000005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b[100005] = {0};
        int c[100005] = {0};
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[a[i]] > 1 && c[a[i]] == 0)
            {
                dem = dem + b[a[i]];
                c[a[i]] = 1;
            }
        }
        cout << dem;
        cout << endl;
    }
}