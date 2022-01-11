#include <bits/stdc++.h>
using namespace std;
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
        int p = 0;
        int b[n][m];
        int hang = 0, cot = 0, N = n, M = m;
        while (p != n * m)
        {
            if (p == n * m - 1)
                b[hang][cot] = a[hang][cot];
            else
                b[hang][cot] = a[hang + 1][cot];
            ++p;
            if (p == n * m)
                break;
            for (int i = cot + 1; i < M; ++i)
            {
                b[hang][i] = a[hang][i - 1];
                ++p;
                if (p == n * m)
                    break;
            }
            if (p == n * m)
                break;
            for (int i = hang + 1; i < N; ++i)
            {
                b[i][M - 1] = a[i - 1][M - 1];
                ++p;
                if (p == n * m)
                    break;
            }
            if (p == n * m)
                break;
            for (int i = M - 2; i >= cot; --i)
            {
                b[N - 1][i] = a[N - 1][i + 1];
                ++p;
                if (p == n * m)
                    break;
            }
            if (p == n * m)
                break;
            for (int i = N - 2; i > hang; --i)
            {
                b[i][cot] = a[i + 1][cot];
                ++p;
                if (p == n * m)
                    break;
            }
            cot++;
            hang++;
            N--;
            M--;
        }
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cout << b[i][j] << " ";
        cout << endl;
    }
}