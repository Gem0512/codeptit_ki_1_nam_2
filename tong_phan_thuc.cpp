#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    double S = 0;
    while (i <= n)
    {
        S = S + (double)1 / i;
        i++;
    }
    cout << setprecision(4) << fixed << S;
}
