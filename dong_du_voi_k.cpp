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
        vector<int> a(n);
        int min1 = 999999999;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            min1 = min(min1, a[i]);
        }
        int ucln = a[0];
        for (int i = 1; i < n; i++)
        {
            ucln = __gcd(ucln, a[i]);
        }
        int res = 0;
        for (int i = 1; i <= sqrt(ucln); i++)
        {
            if (ucln % i == 0)
            {
                if (i != ucln / i)
                    res += 2;
                else
                    res++;
            }
        }
        cout << res;
        cout << endl;
    }
}