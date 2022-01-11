#include <bits/stdc++.h>
using namespace std;
int sumcacchuso(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int b = n % 10;
        sum += b;
        n /= 10;
    }
    return sum;
}
int snt(long long n)
{
    if (n < 2)
        return 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int sumthuaso1so(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0 && snt(i))
        {
            sum += sumcacchuso(i);
            n /= i;
        }
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (snt(n))
            cout << "NO";
        else
        {
            if (sumcacchuso(n) == sumthuaso1so(n))
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}