#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        int n = s.size();
        int chan = 0, le = 0;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] != 32 && s[i + 1] == 32) || (s[i] != 32 && s[i + 1] == '\n'))
            {
                dem++;
                if ((s[i] - 48) % 2 == 0)
                    chan++;
                else if ((s[i] - 48) % 2 != 0)
                    le++;
            }
        }
        dem = dem + 1;
        if ((s[n - 1] - 48) % 2 == 0)
            chan++;
        if ((s[n - 1] - 48) % 2 != 0)
            le++;
        if ((dem % 2 == 0 && chan > le) || (dem % 2 != 0 && chan < le))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}