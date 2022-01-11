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
        int n = s.size();
        int m = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (((s[i] - 48) - (s[i + 1] - 48)) != -1 && ((s[i] - 48) - (s[i + 1] - 48)) != 1)
            {
                m = 1;
                break;
            }
        }
        if (m == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
