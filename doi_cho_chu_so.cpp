#include <bits/stdc++.h>
using namespace std;

string prevNum(string str)
{
    int len = str.length();
    int index = -1;

    for (int i = len - 2; i >= 0; i--)
    {
        if (str[i] > str[i + 1])
        {
            index = i;
            break;
        }
    }

    int k = -1;
    for (int i = len - 1; i > index; i--)
    {
        if (str[i] < str[index])
        {
            if (k == -1)
                k = i;
            else if (str[i] >= str[k])
                k = i;
        }
    }
    if (index == -1)
        return "-1";

    if (k != -1)
    {
        swap(str[index], str[k]);
        return str;
    }

    return "-1";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b = prevNum(a);
        if (b[0] - 48 == 0)
            cout << "-1" << endl;
        else
            cout << prevNum(a) << endl;
    }
}
