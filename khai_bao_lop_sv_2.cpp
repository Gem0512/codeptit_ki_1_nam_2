#include <bits/stdc++.h>
#define a() a
using namespace std;
class SinhVien
{
private:
    string ten;
    string lop;
    string ngaysinh;
    float diem;

public:
    SinhVien(){};
    friend istream &operator>>(istream &in, SinhVien &p)
    {
        scanf("\n");
        getline(cin, p.ten);

        in >> p.lop >> p.ngaysinh >> p.diem;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien &p)
    {

        vector<string> A;
        stringstream C(p.ten);
        string b;
        while (C >> b)
        {
            A.push_back(b);
        }
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                if (j == 0)
                {
                    A[i][j] = toupper(A[i][j]);
                }
                else
                {
                    A[i][j] = tolower(A[i][j]);
                }
            }
        }
        if (p.ngaysinh[2] != '/')
        {
            p.ngaysinh.insert(0, "0");
        }
        if (p.ngaysinh[5] != '/')
        {
            p.ngaysinh.insert(3, "0");
        }
        out << "B20DCCN001"
            << " ";
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        out << p.lop << " " << p.ngaysinh << " ";
        out << fixed << setprecision(2) << p.diem;
        return out;
    }
};
int main()
{
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}