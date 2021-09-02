#include <stdio.h>
#include <math.h>
long long mu(int n)
{
    long long s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * 10;
    }
    return s;
}
int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    int i = 0;
    long long a[20], b[20];
    while (n != 0)
    {
        a[i] = n % 10;
        n = n / 10;
        i++;
    }
    int j = 0;
    while (m != 0)
    {
        b[j] = m % 10;
        m = m / 10;
        j++;
    }
    long long s = 0;
    for (int h = 0; h < i; h++)
    {
        if (a[h] == 6)
            a[h] = 5;
        s = s + a[h] * mu(h);
    }
    for (int k = 0; k < j; k++)
    {
        if (b[k] == 6)
            b[k] = 5;
        s = s + b[k] * mu(k);
    }
    long long p = 0;
    for (int h = 0; h < i; h++)
    {
        if (a[h] == 5)
            a[h] = 6;
        p = p + a[h] * mu(h);
    }
    for (int k = 0; k < j; k++)
    {
        if (b[k] == 5)
            b[k] = 6;
        p = p + b[k] * mu(k);
    }
    printf("%lld %lld", s, p);
}