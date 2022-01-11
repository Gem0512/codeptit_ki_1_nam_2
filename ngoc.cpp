#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a)-1; i >= (b); --i)
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int a[n + 5], n;
void nhap()
{
     cin >> n;
     FOR(i, 0, n)
     cin >> a[i];
}
void xuat()
{
     cout << "In mảng: " FOR(i, 0, n)
                 cout
          << a[i] << " ";
}

void slove()
{
     nhap();
     xuat();
}
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
     int t;
     cin >> t;
     while (t--)
     {
          slove();
          cout << endl;
     }
}