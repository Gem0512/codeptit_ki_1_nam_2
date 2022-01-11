#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void slove()
{
  int n;
  cin >> n;
  map<int, int> c;
  int max = -1000005;
  int a[n + 5], b[n + 5];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > max)
      max = a[i];
    b[i] = a[i];
  }
  sort(b, b + n);
  for (int i = 0; i < n - 1; i++)
  {
    c[b[i]] = b[i + 1];
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] == max)
      cout << "_"
           << " ";
    else
      cout << c[a[i]] << " ";
  }
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
