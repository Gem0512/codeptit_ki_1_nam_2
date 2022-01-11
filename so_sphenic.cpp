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
        int a[1000], h = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            while (n % i == 0)
            {
                a[h++] = i;
                n /= i;
            }
        }
        if (n > 1)
            a[h++] = n;
        if (h == 3 && a[0] != a[1] && a[1] != a[2])
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
    return 0;
}