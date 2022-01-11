#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
#define PI 3.141592653589793238
db kc(db a, db b, db c, db d)
{
    return sqrt((c - a) * (c - a) + (d - b) * (d - b));
}
void slove()
{
    db x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    db a = kc(x1, y1, x2, y2);
    db b = kc(x1, y1, x3, y3);
    db c = kc(x2, y2, x3, y3);
    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "INVALID";
    else
    {
        db x = 0.25 * (sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b)));
        db r = (a * b * c) / db(4 * x);
        cout << fixed << setprecision(3) << PI * r * r;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}
