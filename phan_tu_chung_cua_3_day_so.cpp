#include <stdio.h>
void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{

    int i = 0, j = 0, k = 0;
    int m = 0;
    while (i < n1 && j < n2 && k < n3)
    {

        if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
        {
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
            m = 1;
        }
        else if (ar1[i] < ar2[j])
            i++;

        else if (ar2[j] < ar3[k])
            j++;

        else
            k++;
    }
    if (m == 0)
        printf("NO");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m, k;
        int a[100000], b[100000], c[100000];
        scanf("%d%d%d", &n, &m, &k);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);
        for (int i = 0; i < k; i++)
            scanf("%d", &c[i]);
        findCommon(a, b, c, n, m, k);
        printf("\n");
    }
}