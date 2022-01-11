#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct ThiSinh
{
    string s;
    string s1;
    float a, b, c;
};
void nhap(ThiSinh &x)
{
    getline(cin, x.s);
    cin >> x.s1;
    cin >> x.a >> x.b >> x.c;
}
void in(ThiSinh &x)
{
    for (int i = 0; i < x.s.size(); i++)
        cout << x.s[i];
    cout << " ";
    cout << x.s1 << " ";
    cout << fixed << setprecision(1) << x.a + x.b + x.c;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
