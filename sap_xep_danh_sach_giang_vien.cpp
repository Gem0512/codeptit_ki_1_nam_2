#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct Sinhvien
{
    string s1, s2, s3, s4;
};
int main()
{

    struct Sinhvien sv[1005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> sv[i].s1;
        scanf("\n");
        getline(cin, sv[i].s2);
        cin >> sv[i].s3 >> sv[i].s4;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string x;
        scanf("\n");
        getline(cin, x);
        string y1, y2, y3, y4, y5;
        if (x == "Ke toan")
            y1 = "KT";
        if (x == "Cong nghe thong tin")
            y2 = "CN";
        if (x == "An toan thong tin")
            y3 = "AT";
        if (x == "Vien thong")
            y4 = "VT";
        if (x == "Dien tu")
            y5 = "DT";
        for (int k = 0; k < x.size(); k++)
        {
            if (x[k] <= 'z' && x[k] >= 'a')
                x[k] = x[k] - 32;
        }
        cout << "DANH SACH SINH VIEN NGANH " << x << ":" << endl;
        for (int j = 0; j < n; j++)
        {
            string z = "";
            z = z + sv[j].s1[5] + sv[j].s1[6];

            if ((z == y2) && sv[j].s1[0] != 'E')
                cout << sv[j].s1 << " " << sv[j].s2 << " " << sv[j].s3 << " " << sv[j].s4 << endl;
            else if ((z == y3) && sv[j].s1[0] != 'E')
                cout << sv[j].s1 << " " << sv[j].s2 << " " << sv[j].s3 << " " << sv[j].s4 << endl;
            else if ((z == y1))
                cout << sv[j].s1 << " " << sv[j].s2 << " " << sv[j].s3 << " " << sv[j].s4 << endl;
            else if ((z == y4))
                cout << sv[j].s1 << " " << sv[j].s2 << " " << sv[j].s3 << " " << sv[j].s4 << endl;
            else if ((z == y5))
                cout << sv[j].s1 << " " << sv[j].s2 << " " << sv[j].s3 << " " << sv[j].s4 << endl;
        }
    }
}
