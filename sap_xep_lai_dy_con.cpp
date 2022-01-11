#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int n, a[1000005];
int k, b[1000005] = {0};

void slove()
{
    cin >> n;
    int k = 0;
    ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[k++] = a[i];
    }
    sort(a, a + n);
    int h = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            h = i;
            break;
        }
    }
    int c = 0;
    for (int i = n; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            c = i;
            break;
        }
    }
    cout << h + 1 << " " << c + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}
