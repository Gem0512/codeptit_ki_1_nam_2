#include <bits/stdc++.h>
using namespace std;
long long n = 1;
class NhanVien
{

public:
    long long ma;
    string ten;
    string gtinh;
    string ngaysinh;
    string diachi;
    string thue;
    string sinh;
    friend istream &operator>>(istream &in, NhanVien &p)
    {
        p.ma = n;
        n++;
        scanf("\n");
        getline(in, p.ten);
        in >> p.gtinh >> p.ngaysinh;
        scanf("\n");
        getline(cin, p.diachi);
        in >> p.thue >> p.sinh;
        ;
        return in;
    }

    friend ostream &operator<<(ostream &out, NhanVien &p)
    {

        if (p.ma < 10)
        {
            out << "0000" << p.ma << " ";
            out << p.ten << " " << p.gtinh << " " << p.ngaysinh << " " << p.diachi << " " << p.thue << " " << p.sinh << endl;
        }
        else
        {
            out << "000" << p.ma << " ";
            out << p.ten << " " << p.gtinh << " " << p.ngaysinh << " " << p.diachi << " " << p.thue << " " << p.sinh << endl;
        }
        return out;
    }
};
int dieukien(NhanVien a, NhanVien b)
{
    long long x = a.ngaysinh[0] * 10 + a.ngaysinh[1] + a.ngaysinh[3] * 300 + a.ngaysinh[4] * 30 + a.ngaysinh[6] * 360000 + a.ngaysinh[7] * 36000 + a.ngaysinh[8] * 3600 + a.ngaysinh[9] * 360;
    long long y = b.ngaysinh[0] * 10 + b.ngaysinh[1] + b.ngaysinh[3] * 300 + b.ngaysinh[4] * 30 + b.ngaysinh[6] * 360000 + b.ngaysinh[7] * 36000 + b.ngaysinh[8] * 3600 + b.ngaysinh[9] * 360;
    return x < y;
}
void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, dieukien);
}
int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}