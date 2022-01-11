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
        int b[15] = {0};
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = s[i] - 48;
            if (s[0] == 0 || (s[i] < 0 || s[i] > 9))
            {
                k = 1;
                break;
            }
            else
            {
                b[s[i]]++;
            }
        }
        if (k == 1)
            cout << "INVALID";
        if (k == 0)
        {
            int dem = 0;
            for (int i = 0; i <= 9; i++)
            {
                if (b[i] >= 1)
                    dem++;
            }
            if (dem == 10)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }
}
