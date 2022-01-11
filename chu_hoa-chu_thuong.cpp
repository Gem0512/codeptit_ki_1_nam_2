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
        char s;
        cin >> s;
        if (s <= 'Z' && s >= 'A')
            s = s + 32;
        else if (s <= 'z' && s >= 'a')
            s = s - 32;
        cout << s << endl;
    }
}
