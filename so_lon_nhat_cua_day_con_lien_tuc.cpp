#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const int nMax = 1e7 + 1;

int n, k;
int a[nMax];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        deque<int> ans;
        vector<int> Max;
        for (int i = 0; i < n; ++i)
        {
            while (ans.size() && a[ans.back()] <= a[i])
                ans.pop_back();
            ans.push_back(i);
            if (ans.front() + k <= i)
                ans.pop_front();
            if (i >= k - 1)
                Max.push_back(a[ans.front()]);
        }
        for (int i = 0; i <= n - k; ++i)
            cout << Max[i] << " ";
        cout << endl;
    }
}
