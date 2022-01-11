#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
string s;

int ktra(int k)
{
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int n = 0;
        for (int j = i; j < s.length(); j++)
        {
            n = n * 10 + s[j] - '0';
            n = n % k;
            if (n == 0)
                dem = dem + 1;
        }
    }
    return dem;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> s;
        cout << ktra(8) - ktra(24) << endl;
    }
    return 0;
}