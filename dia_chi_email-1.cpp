#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
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

    cout << a[a.size() - 1];
    for (int i = 0; i < a.size() - 1; i++)
    {
        cout << a[i][0];
    }
    cout << "@ptit.edu.vn";
}
