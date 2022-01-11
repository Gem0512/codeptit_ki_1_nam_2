#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll MOD = 1e9 + 7;
bool tang(string s)
{
    int k = 0;
    for (int i = 5; i < 10; i++)
    {
        if (s[i] == '.')
        {
            i++;
        }
        if (s[i + 1] == '.')
        {
            if (s[i] >= s[i + 2])
            {
                return false;
            }
        }
        else if (s[i] >= s[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool bang(string s)
{
    int k = 0;
    for (int i = 5; i < 10; i++)
    {
        if (s[i] == '.')
        {
            i++;
        }
        if (s[i + 1] == '.')
        {
            if (s[i] != s[i + 2])
            {
                return false;
            }
        }
        else if (s[i] != s[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool yeu(string s)
{

    if (s[5] == s[6] && s[6] == s[7] && s[10] == s[9])
        return true;
    return false;
}
bool loc(string s)
{
    for (int i = 5; i < 11; i++)
    {
        if (s[i] != '.')
        {
            if (s[i] != '6' && s[i] != '8')
                return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (loc(s) || yeu(s) || bang(s) || tang(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}
