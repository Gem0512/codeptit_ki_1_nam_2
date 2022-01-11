#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> danhdau;
    while (n--)
    {
        string s;
        getline(cin, s);
        danhdau[s] = 1;
    }
    cout << danhdau.size();
}
