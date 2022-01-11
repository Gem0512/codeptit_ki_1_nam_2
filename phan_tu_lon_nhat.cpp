#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100005];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << *std::max_element(a, a + n);
        cout << endl;
    }
}