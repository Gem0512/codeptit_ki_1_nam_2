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
    int n = 0;
    int i = 0;
    while (cin >> sv[i].s1)
    {
        scanf("\n");
        getline(cin, sv[i].s2);
        cin >> sv[i].s3 >> sv[i].s4;
        i++;
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].s3 > sv[j].s3)
                swap(sv[i], sv[j]);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (sv[i].s3 == sv[j].s3)
    //             if (sv[i].s1 > sv[j].s1)
    //                 swap(sv[i], sv[j]);
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cout << sv[i].s1 << " " << sv[i].s2 << " " << sv[i].s3 << " " << sv[i].s4 << endl;
    }
}
