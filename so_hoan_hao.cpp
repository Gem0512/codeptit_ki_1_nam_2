#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int process()
{
    ll n;
    cin >> n;
    if (n > ll(1e12))
    {
        return 0;
    }
    ll sumz = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sumz += i;
            sumz += n / i;
        }
    }
    int k = sqrt(n);
    if (k * k == n)
        sumz += k;
    if (sumz == n)
        return 1;
    else
        return 0;
}

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        cout << process() << endl;
    }
    return 0;
}