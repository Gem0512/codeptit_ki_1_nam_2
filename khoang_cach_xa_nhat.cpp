#include <bits/stdc++.h>
using namespace std;
void nhap(long long a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void xuLy(long long a[], int n)
{
    int m = -1e9;
    int kt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i + 1; j--)
        {
            if (a[i] > a[j])
            {
                continue;
            }
            else
            {
                kt = 0;
                if (m < (j - i))
                    m = j - i;
                break;
            }
        }
        if (kt == 0)
        {
            continue;
            kt = 1;
        }
    }
    cout << m;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        nhap(a, n);
        xuLy(a, n);
        cout << endl;
    }
}