#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    do
    {
        string s;
        getline(cin, s);
        vector<string> a;
        stringstream ss(s);
        string p;
        while (ss >> p)
        {
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            a.push_back(p);
        }
        a[0][0] -= 32;
        for (int i = 0; i < a.size(); i++)
        {
            int k = 0;
            if (a[i][a[i].size() - 1] == '.' || a[i][a[i].size() - 1] == '?' || a[i][a[i].size() - 1] == '!')
            {
                a[i].erase(i, 1);
                cout << a[i] << endl;
                k = 1;
            }
            if (k == 1)
                a[i + 1][0] -= 32;
            else
                cout << a[i] << " ";
        }

    } while (getchar() != '\n');
}
