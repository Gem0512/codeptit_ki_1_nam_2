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
const int nMax = 1e6 + 1;

int n;
vector<int> a, nt;

void setNt()
{
    a.resize(nMax, 0);
    for (int i = 2; i <= 1e3; ++i)
        if (a[i] == 0)
            for (int j = i * i; j <= 1e6; j += i)
                a[j] = 1;
    for (int i = 2; i < 1e6; ++i)
        if (a[i] == 0)
            nt.push_back(i);
}

void Input()
{
    cin >> n;
}

void Solve()
{
    int i = 0;
    while (n - nt[i] >= n / 2)
    {
        if (!a[n - nt[i]])
        {
            cout << nt[i] << " " << n - nt[i] << endl;
            return;
        }
        ++i;
    }
    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    setNt();
    int t;
    cin >> t;
    while (t--)
    {
        Input();
        Solve();
    }
    return 0;
}