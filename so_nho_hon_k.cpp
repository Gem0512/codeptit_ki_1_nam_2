#include <iostream>
using namespace std;

int check(int *a, int n, int k)
{

    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= k)
            ++count;

    int bad = 0;
    for (int i = 0; i < count; i++)
        if (a[i] > k)
            ++bad;

    int ans = bad;
    for (int i = 0, j = count; j < n; ++i, ++j)
    {

        if (a[i] > k)
            --bad;

        if (a[j] > k)
            ++bad;

        ans = min(ans, bad);
    }
    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << check(a, n, k) << "\n";
    }
    return 0;
}