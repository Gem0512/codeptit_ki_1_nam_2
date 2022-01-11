#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    vector<string> x;
    // cin.ignore();
    for (int k = 0; k < n; k++)
    {
        int dem = 1;
        string s;
        scanf("\n");
        getline(cin, s);
        vector<string> a;

        stringstream ss(s);
        string p;
        while (ss >> p)
        {
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            a.push_back(p);
        }
        string q;
        q += a[a.size() - 1];
        x.push_back(q);
        for (int i = 0; i < a.size() - 1; i++)
        {
            x[k] += a[i][0];
        }
        for (int i = 0; i < k; i++)
        {
            if (x[k] == x[i])
                dem++;
        }
        if (dem > 1)
            cout << x[k] << dem;
        else
            cout << x[k];
        cout << "@ptit.edu.vn";
        cout << endl;
    }
}
