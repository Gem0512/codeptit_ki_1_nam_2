#include <stdio.h>
#include <math.h>
int isTriplet(long long arr[], int n)
{

    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
            }
        }
    }
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int r = i - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] == arr[i])
                return 1;

            if (arr[l] + arr[r] < arr[i])
                l++;
            else
                r--;
        }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        long long a[5005];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }

        if (isTriplet(a, n) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}