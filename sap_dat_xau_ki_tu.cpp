#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

void slove()
{
    string s;
    cin >> s;
    ll b[150] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        b[s[i]]++;
    }
    int m = *std::max_element(b, b + 150);
    if (m < s.size() - m + 1)
        cout << "1";
    else
        cout << "0";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        slove();
        cout << endl;
    }
}
