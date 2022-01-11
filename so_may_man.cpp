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
        if (s[n - 1] == '6' && s[n - 2] == '8')
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}
