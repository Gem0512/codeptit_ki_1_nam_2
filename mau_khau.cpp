#include <bits/stdc++.h>
using namespace std;
bool dieukien(string a, string b)
{
    return a.size() < b.size();
}
int main()
{
    int t;
    cin >> t;
    map<string, int> ans;
    vector<string> kq;
    vector<string> a;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() > 10)
        {
            break;
        }
        ans[s]++;
        a.push_back(s);
    }
    int b[100005] = {0};
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] == 0)
        {
            b[i] = 1;
            for (int j = i + 1; j < a.size(); j++)
                if (a[i] == a[j])
                {
                    b[i]++;
                    b[j] = -1;
                }
        }
    }
    int dem = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (b[i] > 0)
            kq.push_back(a[i]);
    }
    sort(kq.begin(), kq.end(), dieukien);
    if (kq.size() == 1)
    {
        dem = ans[kq[0]] * (ans[kq[0]] - 1);
    }
    else
    {
        for (int i = 0; i < kq.size(); i++)
        {
            int thaythe = 0;
            int kt = 1;
            for (int j = i + 1; j < kq.size(); j++)
            {
                if (kq[j].find(kq[i]) != std::string::npos)
                {
                    if (thaythe == 0)
                    {
                        dem += ans[kq[i]] * (ans[kq[i]] - 1);
                    }
                    thaythe++;
                    dem += ans[kq[i]] * ans[kq[j]];
                    kt = 0;
                }
            }
            if (kt == 1)
            {
                dem += ans[kq[i]] * (ans[kq[i]] - 1);
            }
        }
    }
    cout << dem;
}