#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct time
{
    int a, b, c;
};

int main()
{
    int n;
    cin >> n;
    struct time tg[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> tg[i].a >> tg[i].b >> tg[i].c;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tg[i].a > tg[j].a)
                swap(tg[i], tg[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tg[i].a == tg[j].a)
                if (tg[i].b > tg[j].b)
                    swap(tg[i], tg[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tg[i].b == tg[j].b && tg[i].a == tg[j].a)
                if (tg[i].c > tg[j].c)
                    swap(tg[i], tg[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << tg[i].a << " " << tg[i].b << " " << tg[i].c << endl;
    }
}
