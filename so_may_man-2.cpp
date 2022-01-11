#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = s[i] - 48;
            sum = sum + s[i];
        }
        if (sum == 9)
            cout << "1";
        else
        {
            int a;
            while (sum >= 10)
            {
                int s = 0;
                while (sum != 0)
                {
                    a = sum % 10;
                    sum = sum / 10;
                    s = s + a;
                }
                sum = s;
            }
            if (sum == 9)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
}
