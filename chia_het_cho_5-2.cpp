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
        ll x = 0;
        for (int i = 0; i < s.size(); i++)
        {
            x = (x * 2 + (s[i] - 48)) % 5;
        }
        if (x == 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}
