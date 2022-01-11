#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;

int main()
{
    int n;
    cin >> n;
    int m = n;
    int a[n + 5][m + 5];
    int b[n * m];

    int h = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            b[h++] = a[i][j];
        }
    }
    sort(b, b + n * m);
    int k = 0;
    int temp[n][m];
    int v = 0;
    int cot = 0, hang = 0, N = n, M = m;
    while (v < n * m)
    {
        for (int i = cot; i < M; ++i)
        {
            temp[cot][i] = b[v];
            v++;
        }
        for (int i = hang + 1; i < N; ++i)
        {
            temp[i][M - 1] = b[v];
            v++;
        }
        for (int i = M - 2; i >= cot; --i)
        {
            temp[N - 1][i] = b[v];
            v++;
        }
        for (int i = N - 2; i > hang; --i)
        {
            temp[i][cot] = b[v];
            v++;
        }
        cot++;
        hang++;
        N--;
        M--;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}