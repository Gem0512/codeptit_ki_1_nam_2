#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
bool check(int n)
{
    int a;
    int chan = 0, le = 0;
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        if (a % 2 == 0)
            chan++;
        else
            le++;
    }
    if (chan == le)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if (check(i))
        {
            dem++;
            cout << i << " ";
        }
        if (dem % 10 == 0)
            cout << endl;
    }
}
