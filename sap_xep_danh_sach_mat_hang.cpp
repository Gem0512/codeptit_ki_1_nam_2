#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct Danhsach
{
    string s1, s2;
    db a, b;
};

int main()
{
    struct Danhsach ds[1005];
    int n;
    cin >> n;
    // cin.ignore();
    db x[10005];
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, ds[i].s1);
        scanf("\n");
        getline(cin, ds[i].s2);
        cin >> ds[i].a >> ds[i].b;
        x[i] = ds[i].b - ds[i].a;
    }
    sort(x, x + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] == ds[j].b - ds[j].a)
            {
                cout << j + 1 << " " << ds[j].s1 << " " << ds[j].s2 << " " << fixed << setprecision(2) << x[i] << endl;
            }
        }
    }
}
