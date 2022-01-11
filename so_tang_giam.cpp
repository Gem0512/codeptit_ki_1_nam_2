#include <iostream>
#include <cmath>

using namespace std;

int n;

bool nto(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}
bool tang(int x)
{
    int t = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (t <= x % 10)
            return false;
        t = x % 10;
        x /= 10;
    }

    return true;
}

bool giam(int x)
{
    int t = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (t >= x % 10)
            return false;
        t = x % 10;
        x /= 10;
    }

    return true;
}

void tanggiam()
{
    cin >> n;
    int dem = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++)
    {
        if ((tang(i) || giam(i)))
        {
            if (nto(i))
                dem++;
        }
    }
    cout << dem << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        tanggiam();
    }
}