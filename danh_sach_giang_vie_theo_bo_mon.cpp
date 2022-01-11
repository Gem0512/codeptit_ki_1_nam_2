#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
struct GV
{
    string s1, s2;
};

int main()
{
    struct GV gv[1005];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("\n");
        getline(cin, gv[i].s1);
        scanf("\n");
        getline(cin, gv[i].s2);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string s;
        scanf("\n");
        getline(cin, s);
        string x = "";
        x = x + s[0];
        for (int k = 0; k < s.size(); k++)
        {
            if (s[k] == ' ' && s[k + 1] != ' ')
                x += (s[k + 1] - 32);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << x << ":" << endl;
        for (int j = 0; j < n; j++)
        {
            if (s == gv[j].s2)
            {
                cout << "GV";
                if (j < 9)
                    cout << "0" << j + 1;
                else
                    cout << j + 1;
                cout << " ";
                cout << gv[j].s1 << " " << x << endl;
            }
        }
    }
}
