#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;

#define PI atan(1) * 4
#define in INT_MAX
#define im INT_MIN
#define fi first
#define se second
#define mp(x, y) make_pair(x, y)
const int Mod = 1e9 + 7;

string a;

void Input()
{
    cin >> a;
}

void Solve()
{
    int s = a.size(), Max = 0;
    for (int i = 0; i < s; ++i)
    {
        int tmp = 0;
        while (i < s && a[i] >= '0' && a[i] <= '9')
        {
            tmp *= 10;
            tmp += a[i++] - '0';
        }
        Max = max(Max, tmp);
    }
    cout << Max << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        Solve();
    }
    return 0;
}