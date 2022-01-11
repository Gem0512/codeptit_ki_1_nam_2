#include <bits/stdc++.h>

using namespace std;
int n;
string a[100001];
void nhap()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
int check(string x, string y)
{
    string xy = x + y;
    string yx = y + x;
    if (xy.compare(yx) > 0)
        return 1;
    return 0;
}
void xuat()
{
    sort(a, a + n, check);
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        nhap();
        xuat();
    }
}