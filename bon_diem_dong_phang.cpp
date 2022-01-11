#include <stdio.h>
void ktra(int x1, int y1, int z1, int x2, int y2, int z2,
          int x3, int y3, int z3, int x, int y, int z)
{
    int a1 = x2 - x1;
    int b1 = y2 - y1;
    int c1 = z2 - z1;
    int a2 = x3 - x1;
    int b2 = y3 - y1;
    int c2 = z3 - z1;
    int a = b1 * c2 - b2 * c1;
    int b = a2 * c1 - a1 * c2;
    int c = a1 * b2 - b1 * a2;
    int d = (-a * x1 - b * y1 - c * z1);

    if (a * x + b * y + c * z + d == 0)
        printf("YES");
    else
        printf("NO");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d, e, f, g, h, i, k, t, q;
        scanf("%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &k, &t, &q);
        ktra(a, b, c, d, e, f, g, h, i, k, t, q);
        printf("\n");
    }
}