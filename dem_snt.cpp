#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, l, r, a[100000];

void nhap()
{
    cin >> l >> r;
}
void check()
{
    a[0] = 0;
    a[1] = 0;
    for (int i = 2; i <= r; i++)
        a[i] = 1;
    for (int i = 2; i <= r; i++)
    {
        if (a[i])
        {
            for (int j = i * 2; j <= r; j += i)
                a[j] = 0;
        }
    }
}
void in()
{
    int count = 0;
    for (int i = l; i <= r; i++)
    {
        if (a[i])
            count++;
    }
    cout << count << endl;
}

int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        check();
        in();
    }
}