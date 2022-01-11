#include <bits/stdc++.h>
using namespace std;
void cuon1(int a[40][40], vector<int> c2, int n)
{
    int X = 0, x = n - 1, Y = 0, y = n - 1;
    while (x > X && y > Y)
    {
        for (int i = x; i >= X; i--)
            c2.push_back(a[i][y]);
        Y++;
        y--;
        for (int i = y; i >= Y; i--)
            c2.push_back(a[X][i]);
        X++;
        x--;
        for (int i = X; i <= x; i++)
            c2.push_back(a[i][Y]);
        Y++;
        if (Y == y)
            break;
        y--;
        for (int i = Y; i <= y; i++)
            c2.push_back(a[x][i]);
        X++;
        x--;
    }
    for (int i = c2.size() - 1; i >= 0; i--)
        cout << c2[i] << " ";
    cout << endl;
}
void cuon2(int a[40][40], vector<int> c2, int n)
{
    int X = n - 1, x = 0, Y = n - 1, y = 0;
    while (x < X && y < Y)
    {
        for (int i = x; i <= X; i++)
            c2.push_back(a[i][y]);
        Y--;
        y++;
        for (int i = y; i <= Y; i++)
            c2.push_back(a[X][i]);
        X--;
        x++;
        for (int i = X; i >= x; i--)
            c2.push_back(a[i][Y]);
        Y--;
        if (Y == y)
            break;
        y++;
        for (int i = Y; i >= y; i--)
            c2.push_back(a[x][i]);
        X--;
        x++;
    }
    for (int i = c2.size() - 1; i >= 0; i--)
        cout << c2[i] << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, d = 1;
        cin >> N;
        int n = 4 * N;
        int a[40][40];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = d++;
        vector<int> c1, c2;
        cuon1(a, c1, n);
        cuon2(a, c2, n);
    }
}
