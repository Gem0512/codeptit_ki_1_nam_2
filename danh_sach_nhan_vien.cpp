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
void inds(NhanVien x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
            cout << "0000" << i + 1 << " ";
        else
            cout << "000" << i + 1 << " ";
        cout << x[i].s;
        cout << " " << x[i].s1 << " " << x[i].s2 << " ";
        cout << x[i].s3 << " ";
        cout << x[i].s4 << " " << x[i].s5;
        cout << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    cin.ignore();
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
