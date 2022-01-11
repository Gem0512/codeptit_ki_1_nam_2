#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, m;
    while (t--)
    {
        cin >> a >> m;
        bool flat = false;
        for (int i = 1; i < m; i++)
        {
            if ((a * i) % m == 1)
            {
                cout << i << endl;
                flat = true;
                break;
            }
        }
        if (!flat)
            cout << "-1" << endl;
    }
}