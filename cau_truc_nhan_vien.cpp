#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct NhanVien
{
    string s, s1, s2, s3, s4, s5;
};
void nhap(NhanVien &x)
{
    scanf("\n");
    getline(cin, x.s);
    cin >> x.s1 >> x.s2;
    scanf("\n");
    getline(cin, x.s3);
    cin >> x.s4 >> x.s5;
}
void in(NhanVien &x)
{
    cout << "00001 ";
    cout << x.s;
    cout << " " << x.s1 << " " << x.s2 << " ";
    cout << x.s3 << " ";
    cout << x.s4 << " " << x.s5;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
