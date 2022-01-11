#include <iostream>
using namespace std;

// int check(int a[], int n, int x)
// {
//     int min = n + 5;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = a[i];

//         if (sum > x)
//             return 1;

//         for (int j = i + 1; j < n; j++)
//         {
//             sum += a[j];
//             if (sum > x && (j - i + 1) < min)
//                 min = (j - i + 1);
//         }
//     }
//     return min;
// }

int check(int arr[], int n, int x)
{
    int sum = 0, min = n + 1;

    int start = 0, end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
            sum += arr[end++];

        while (sum > x && start < n)
        {
            if (end - start < min)
                min = end - start;
            sum -= arr[start++];
        }
    }
    return min;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int kq = check(a, n, x);
        if (kq == n + 1)
            cout << "-1";
        else
            cout << kq;

        cout << endl;
    }
}
