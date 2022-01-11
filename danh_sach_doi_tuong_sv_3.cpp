#include <bits/stdc++.h>
using namespace std;
long long n = 1;
class SinhVien
{
private:
    long long ma;
    string ten;
    string lop;
    string ngaysinh;
    double diem;

public:
    friend istream &operator>>(istream &in, SinhVien &p)
    {
        p.ma = n;
        n++;
        scanf("\n");
        getline(in, p.ten);
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
        if (p.ma < 10)
        {
            out << "B20DCCN00" << p.ma << " ";
            for (int i = 0; i < A.size(); i++)
            {
                cout << A[i] << " ";
            }
            out << p.lop << " " << p.ngaysinh << " ";
            out << fixed << setprecision(2) << p.diem << endl;
        }
        else
        {
            out << "B20DCCN0" << p.ma << " ";
            for (int i = 0; i < A.size(); i++)
            {
                cout << A[i] << " ";
            }
            out << p.lop << " " << p.ngaysinh << " ";
            out << fixed << setprecision(2) << p.diem << endl;
        }
        return out;
    }}
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
