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
        int k;
        cin >> k;
        int n = s.size();
        int a[100005] = {0};
        for (int i = 0; i < n; i++)
        {
            a[s[i]]++;
        }
        int dem = 0;
        for (int i = 97; i <= 122; i++)
        {
            if (a[i] >= 1)
                dem++;
        }
        if (n >= 26 && (26 - dem <= k))
            cout << "1";
        else
            cout << "0";
        cout << endl;
    }
}
