#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void slove()
{
    int n, m;
    cin >> n >> m;
    int a[100005], b[100005];
    FOR(i, 0, n)
    cin >> a[i];
    FOR(i, 0, m)
    cin >> b[i];
    int dem = 0;
    FOR(i, 0, n)
    {
        FOR(j, 0, m)
        {
            if (b[j] > a[i] * log(b[j]) / log(a[i]))
            {
                dem++;
            }
        }
    }
    cout << dem;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}
//Code by TN