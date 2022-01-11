
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int const N = 2e5 + 5;
int ngto[N];
string S[1000];
void slove()
{
    int n, x;
    cin >> n >> x;
    int a[n + 5];
    int d1 = 0, d2 = 0;
    int b[N] = {0};
    bool kt = false;
    for (int i = n; i >= 1; i--)
    {
        cin >> a[i];
        b[a[i]] = 1;
    }
    int l = 1, r = n;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] >= x && b[a[i] - x] == 1)
            kt = true;
        else
        {
            if (b[a[i] + x] == 1)
                kt = true;
        }
    }
    if (kt == true)
        cout << 1 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}
