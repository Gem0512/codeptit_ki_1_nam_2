#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[105][105], b[100][100];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> b[i][j];
        }
    }
    int x = 1, y = 1;
    for (int i = 1; i <= n; i++)
    {
        if (x == m + 1)
            x = 1;
        for (int j = 1; j <= n; j++)
        {
            if (y == m + 1)
                y = 1;
            cout << a[i][j] * b[x][y] << " ";
            y++;
        }
        cout << endl;
        x++;
    }
}