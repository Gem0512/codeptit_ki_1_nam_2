#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        db a, b, c, d;
        cin >> a >> b >> c >> d;
        db s = sqrt((c - a) * (c - a) + (d - b) * (d - b));
        cout << setprecision(4) << fixed << s;
        cout << endl;
    }
}
