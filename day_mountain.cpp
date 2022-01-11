#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        int x = 0;
        for (int i = l; i <= r; i++)
        {
            if (a[i + 1] < a[i])
            {
                for (int j = i + 1; j <= r; j++)
                {
                    if (a[j - 1] < a[j])
                    {
                        x = 1;
                        cout << "No";
                        break;
                    }
                }
                if (x == 1)
                    break;
            }
        }
        if (x == 0)
            cout << "Yes";
        cout << endl;
    }
}