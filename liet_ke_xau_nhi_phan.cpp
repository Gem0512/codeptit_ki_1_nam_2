#include <bits/stdc++.h>
using namespace std;
int k;
int c[100];
void in()
{
    for (int i = 1; i <= k; i++)
    {
        cout << c[i];
    }
    cout << ' ';
}
void lap(int a)
{
    for (int i = 0; i < 2; i++)
    {
        c[a] = i;
        if (a == k)
            in();
        else
            lap(a + 1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        c[0] = 0;
        lap(1);
        cout << endl;
    }
}