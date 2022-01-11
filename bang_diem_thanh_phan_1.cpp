#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct Sinhvien
{
    string s1, s2, s3;
    db a, b, c;
};
int main()
{
    int n;
    cin >> n;
    //   cin.ignore();
    struct Sinhvien sv[105];
    string x[105];
    for (int i = 0; i < n; i++)
    {
        cin >> sv[i].s1;
        scanf("\n");
        getline(cin, sv[i].s2);
        //  scanf("\n");
        cin >> sv[i].s3;
        cin >> sv[i].a >> sv[i].b >> sv[i].c;
        x[i] = sv[i].s1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                string q = x[i];
                x[i] = x[j];
                x[j] = q;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] == (sv[j].s1))
            {
                cout << i + 1 << " ";
                cout << sv[j].s1 << " ";
                cout << sv[j].s2 << " ";
                cout << sv[j].s3 << " ";
                cout << fixed << setprecision(1) << sv[j].a << " ";
                cout << fixed << setprecision(1) << sv[j].b << " ";
                cout << fixed << setprecision(1) << sv[j].c << " " << endl;
                break;
            }
        }
    }
}
