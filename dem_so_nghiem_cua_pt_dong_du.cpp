#include <bits/stdc++.h>
using namespace std;
#define ll long long
void slove(long b, long p)
{
    int dem = 0;
    for (long i = 1; i < p; i++)
    {
        if ((i * i) % p == 1)
        {
            long a = i + p * (b / p);
            if (a > b)
                a -= p;
            dem += ((a - i) / p + 1);
        }
    }
    cout << dem;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long b, p;
        cin >> b >> p;
        slove(b, p);

        cout << endl;
    }
}