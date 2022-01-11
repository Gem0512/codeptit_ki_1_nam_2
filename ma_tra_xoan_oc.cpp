#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        int k = 0;
        int temp[n * m];
        int cot = 0, hang = 0, N = n, M = m;
        while (k < n * m)
        {
            for (int i = cot; i < M; ++i)
            {
                temp[k++] = a[cot][i];
            }
            for (int i = hang + 1; i < N; ++i)
            {
                temp[k++] = a[i][M - 1];
            }
            for (int i = M - 2; i >= cot; --i)
            {
                temp[k++] = a[N - 1][i];
            }
            for (int i = N - 2; i > hang; --i)
            {
                temp[k++] = a[i][cot];
            }
            cot++;
            hang++;
            N--;
            M--;
        }
        for (int i = 0; i < n * m; ++i)
            cout << temp[i] << " ";
        cout << endl;
    }
    return 0;
}

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16