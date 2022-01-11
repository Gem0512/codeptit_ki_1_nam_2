#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct sinhvien
{
    string s1, s2, s3, s4, s5;
};

int main()
{
    int n;
    cin >> n;
    struct sinhvien sv[1000];
    string x[1005];
    for (int i = 0; i < n; i++)
    {
        cin >> sv[i].s1;
        scanf("\n");
        getline(cin, sv[i].s2);
        cin >> sv[i].s3;
        cin >> sv[i].s4;
        cin >> sv[i].s5;
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
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        for (int k = 0; k < n; k++)
            for (int j = 0; j < n; j++)
            {
                if (s == sv[j].s5 && x[k] == sv[j].s1)
                {
                    cout << j + 1 << " ";
                    cout << sv[j].s1 << " " << sv[j].s2 << " " << sv[j].s3 << " " << sv[j].s4 << " " << sv[j].s5;
                    cout << endl;
                }
            }
    }
}
