#include <bits/stdc++.h>
using namespace std;
int so(char c)
{
    return c - '0';
}
char chu(int n)
{
    return (char)(n + 48);
}
void chuanhoa(string &a, string &b)
{
    int l1 = a.size();
    int l2 = b.size();
    if (l1 > l2)
    {
        b.insert(0, l1 - l2, '0');
    }
    else
    {
        a.insert(0, l2 - l1, '0');
    }
}
string hieu(string a, string b)
{
    string s = " ";
    int nho = 0;
    chuanhoa(a, b);
    if (a < b)
        swap(a, b);
    int l = a.size();
    for (int i = l - 1; i >= 0; i--)
    {
        nho = so(a[i]) - so(b[i]) - nho;
        if (nho < 0)
        {
            nho += 10;
            s.insert(0, 1, chu(nho));
            nho = 1;
        }
        else if (nho >= 0)
        {
            s.insert(0, 1, chu(nho));
            nho = 0;
        }
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string s;
        s = hieu(a, b);
        cout << s << endl;
    }
}