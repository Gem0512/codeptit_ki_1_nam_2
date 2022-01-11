#include <bits/stdc++.h>
using namespace std;
long long n = 1;
class SinhVien
{
private:
    long long ma;
    string ten;
    string gtinh;
    string ngaysinh;
    string diachi;
    string thue;
    string sinh;

public:
    friend istream &operator>>(istream &in, SinhVien &p)
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

    friend ostream &operator<<(ostream &out, SinhVien &p)
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

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}