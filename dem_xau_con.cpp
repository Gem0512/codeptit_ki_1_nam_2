#include <bits/stdc++.h>
using namespace std;

int count(string s, int k)
{
    int n = s.size();
    int res = 0;
    int a[50];

    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        memset(a, 0, sizeof(a));

        for (int j = i; j < n; j++)
        {
            if (a[s[j] - 'a'] == 0)
                dem++;

            a[s[j] - 'a']++;

            if (dem == k)
                res++;
            if (dem > k)
                break;
        }
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        int k;
        cin >> str >> k;
        cout << count(str, k) << endl;
    }
}
