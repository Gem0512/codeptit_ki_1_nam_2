#include <bits/stdc++.h>
using namespace std;
long long m = pow(10, 9) + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long f[1005];
        f[1] = 1;
        f[2] = 1;
        for (long long i = 3; i <= n; i++)
        {
            f[i] = (f[i - 1] + f[i - 2]) % m;
        }
        cout << f[n] << endl;
    }
}