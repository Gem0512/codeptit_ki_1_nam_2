#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)

int n, m, a[105][105];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1])
        {
            dfs(i1, j1);
        }
    }
}
void slove()
{
    cin >> n >> m;
    FOR(i, 0, n)
    {
        FOR(j, 0, m)
        cin >> a[i][j];
    }
    int cnt = 0;
    FOR(i, 0, n)
    {
        FOR(j, 0, m)
        {
            if (a[i][j])
            {
                ++cnt;
                dfs(i, j);
            }
        }
    }
    cout << cnt;
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
