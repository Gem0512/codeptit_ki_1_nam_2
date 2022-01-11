#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        char a[100];
        string b[100];
        int i = 0;
        stringstream ss;
        ss << s;
        while (ss >> a)
        {
            b[i++] = a;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << b[j] << " ";
        cout << endl;
    }
}