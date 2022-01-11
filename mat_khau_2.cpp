#include <bits/stdc++.h>

using namespace std;

#define int long long

const int p = 31;

int n;
string s[100001];

map<int, int> cnt;

// Hashing
int pow_p[11];
int h[100001][11];
int cal_h(int id, int l, int r)
{
    return h[id][r] - h[id][l - 1] * pow_p[r - l + 1];
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    pow_p[0] = 1;
    for (int i = 1; i <= 10; i++)
        pow_p[i] = pow_p[i - 1] * p;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
        s[i] = '*' + s[i]; // 1-based

        for (int j = 1; j < s[i].size(); j++)
            h[i][j] = h[i][j - 1] * p + (s[i][j] - 'a' + 1);
        cnt[h[i][s[i].size() - 1]]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int sz = s[i].size() - 1;

        vector<int> diff_h;
        for (int l = 1; l < s[i].size(); l++)
            for (int r = l; r <= sz; r++)
            {
                int cur_h = cal_h(i, l, r);
                diff_h.push_back(cur_h);
            }
        sort(diff_h.begin(), diff_h.end());
        diff_h.resize(unique(diff_h.begin(), diff_h.end()) - diff_h.begin());

        for (int j = 0; j < diff_h.size(); j++)
            ans += cnt[diff_h[j]];
        // cout << i << ' ' << ans << '\n';
    }
    cout << ans - n;
}