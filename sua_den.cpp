#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
   int n, k, b;
   cin >> n >> k >> b;
   int a;
   int c[100005];
   for (int i = 1; i <= n + 1; i++)
   {
      c[i] = 1;
   }
   for (int i = 0; i < b; i++)
   {
      cin >> a;
      c[a] = 0;
   }
   int e = 0;
   for (int i = 1; i <= k; i++)
      e += c[i];
   int ans = k - e;
   for (int i = k + 1; i <= n; i++)
   {
      e += c[i];
      e -= c[i - k];
      ans = min(ans, k - e);
   }
   if (ans < 0)
      cout << "0";
   else
      cout << ans;
}
