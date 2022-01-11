#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct SinhVien
{
    string s;
    string s1;
    string s2;
    db a;
};
void nhap(SinhVien &x)
{
    getline(cin, x.s);
    cin >> x.s1 >> x.s2 >> x.a;
}
void in(SinhVien &x)
{
    cout << "B20DCCN001 ";
    for (int i = 0; i < x.s.size(); i++)
        cout << x.s[i];
    cout << " " << x.s1 << " ";
    int n = x.s2.size();
    if (x.s2[1] == '/')
    {
        n++;
        for (int i = n - 1; i >= 1; i--)
        {
            x.s2[i] = x.s2[i - 1];
        }
        x.s2[0] = '0';
    }
    if (x.s2[4] == '/')
    {
        n++;
        for (int i = n - 1; i >= 3; i--)
        {
            x.s2[i] = x.s2[i - 1];
        }
        x.s2[3] = '0';
    }
    for (int i = 0; i < n; i++)
        cout << x.s2[i];
    cout << " ";
    cout << fixed << setprecision(2) << x.a;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
