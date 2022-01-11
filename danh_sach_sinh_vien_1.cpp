#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct SinhVien
{
    string s1, s2, s3;
    float a;
};
void nhap(SinhVien sv[], int n)
{
    for (int j = 0; j < n; j++)
    {
        scanf("\n");
        getline(cin, sv[j].s1);
        vector<string> a;
        stringstream ss(sv[j].s1);
        string p;
        while (ss >> p)
        {
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            a.push_back(p);
        }
        for (int i = 0; i < a.size(); i++)
        {
            a[i][0] -= 32;
        }
        sv[j].s1 = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (i != a.size() - 1)
                sv[j].s1 = sv[j].s1 + a[i] + ' ';
            else
                sv[j].s1 = sv[j].s1 + a[i];
        }

        cin >> sv[j].s2 >> sv[j].s3 >> sv[j].a;
        string x = sv[j].s3;
        int m = x.size();
        if (x[1] == '/')
        {
            m++;
            for (int i = m - 1; i >= 1; i--)
            {
                x[i] = x[i - 1];
            }
            x[0] = '0';
        }
        if (x[4] == '/')
        {
            m++;
            for (int i = m - 1; i >= 3; i--)
            {
                x[i] = x[i - 1];
            }
            x[3] = '0';
        }
        sv[j].s3 = "";
        for (int i = 0; i < m; i++)
        {
            sv[j].s3 += x[i];
        }
    }
}
void in(SinhVien sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "B20DCCN";
        if (i + 1 <= 9)
            cout << "00" << i + 1 << " ";
        else
            cout << "0" << i + 1 << " ";
        cout << sv[i].s1 << " " << sv[i].s2 << " " << sv[i].s3 << " ";
        cout << fixed << setprecision(2) << sv[i].a << endl;
    }
}
int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
