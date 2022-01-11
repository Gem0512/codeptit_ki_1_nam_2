#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
ll a[1000005], b[1000005], c[1000005], d[1000005];
void findCommon(ll ar1[], ll ar2[], ll ar3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    int h = 0;
    while (i < n1 && j < n2 && k < n3)
    {

        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            d[h++] = ar1[i];
            i++;
            j++;
            k++;
        }

        else if (ar1[i] < ar2[j])
            i++;

        else if (ar2[j] < ar3[k])
            j++;
        else
            k++;
    }
    if (h == 0)
        cout << "-1";
    else
    {
        sort(d, d + h);
        for (int i = 0; i < h; i++)
            cout << d[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, p;
        cin >> n >> m >> p;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (int i = 0; i < p; i++)
            cin >> c[i];
        findCommon(a, b, c, n, m, p);
        cout << endl;
    }
}
