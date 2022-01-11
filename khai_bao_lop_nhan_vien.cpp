#include <bits/stdc++.h>
using namespace std;
#define a() a
class NhanVien
{
private:
    string ten;
    string gioitinh;
    string ngaysinh;
    string diachi;
    string ma;
    string hopdong;

public:
    friend istream &operator>>(istream &, NhanVien &);
    friend ostream &operator<<(ostream &, NhanVien &);
};
istream &operator>>(istream &in, NhanVien &p)
{
    scanf("\n");
    getline(in, p.ten);
    in >> p.gioitinh >> p.ngaysinh;
    scanf("\n");
    getline(in, p.diachi);
    in >> p.ma >> p.hopdong;
    return in;
}
ostream &operator<<(ostream &out, NhanVien &p)
{
    out << "00001"
        << " " << p.ten << " " << p.gioitinh << " " << p.ngaysinh << " " << p.diachi << " " << p.ma << " " << p.hopdong;
    return out;
}
int main()
{
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}