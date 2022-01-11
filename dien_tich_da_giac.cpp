#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

double dtich(double X[], double Y[], int n)
{
    double area = 0.0;

    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;
    }
    return abs(area / 2.0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        db a[1000], b[1000];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        cout << fixed << setprecision(3) << dtich(a, b, n);
        cout << endl;
    }
}
