#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int m = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                m = 1;
                cout << "NO";
                break;
            }
        }
        if (m == 0)
            cout << "YES";
        cout << endl;
    }
}
