#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1005][4];
    int dem1 = 0;
    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                dem++;
        }
        if (dem >= 2)
            dem1++;
    }
    cout << dem1;
}