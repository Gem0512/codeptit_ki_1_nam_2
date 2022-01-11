#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    int tt;
    string ten;
    string gioitinh;
    string ngay;
    string diachi;
    long long ma;
    string hopdong;
    long long tong;
};
void nhap(NhanVien &p)
{
    scanf("\n");
    getline(cin, p.ten);
    cin >> p.gioitinh;
    cin >> p.ngay;
    scanf("\n");
    getline(cin, p.diachi);
    cin >> p.ma;
    cin >> p.hopdong;
}
int dieukien(NhanVien a, NhanVien b)
{
    return a.tong < b.tong;
}
void sapxep(NhanVien *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].tt = i + 1;
        for (int j = 0; j < a[i].ngay.size(); j++)
        {
            a[i].ngay[j] = a[i].ngay[j] - '0';
            a[i].tong = a[i].ngay[0] * 300 + a[i].ngay[1] * 30 + a[i].ngay[3] * 10 + a[i].ngay[4] + a[i].ngay[6] * 365000 + a[i].ngay[7] * 36500 + a[i].ngay[8] * 3650 + a[i].ngay[9] * 365;
            a[i].ngay[j] = a[i].ngay[j] + '0';
        }
    }
    sort(a, a + n, dieukien);
}
void inds(NhanVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].tt > 9)
        {
            cout << "000" << ds[i].tt << " ";
        }
        else
        {
            cout << "0000" << ds[i].tt << " ";
        }
        cout << ds[i].ten << " " << ds[i].gioitinh << " " << ds[i].ngay << " ";
        cout << ds[i].diachi << " " << ds[i].ma << " " << ds[i].hopdong << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}