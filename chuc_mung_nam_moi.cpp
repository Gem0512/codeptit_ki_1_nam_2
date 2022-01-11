#include <bits/stdc++.h>
using namespace std;
char *xoa(char *s)
{
    int i = 0, j = 0;
    while (s[i])
    {
        if (s[i] != ' ')
            s[j++] = s[i];
        i++;
    }
    s[j] = '\0';
    return s;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    vector<string> A;
    for (int i = 0; i < t; i++)
    {
        char s[100005];
        cin.getline(s, 100005);
        xoa(s);
        stringstream C(s);
        string b;
        while (!C.eof())
        {
            C >> b;
            A.push_back(b);
        }
    }
    int b[100005] = {0};
    int i, j;
    for (i = 0; i < A.size(); i++)
    {
        if (b[i] == 0)
        {
            b[i] = 1;
            for (j = i + 1; j < A.size(); j++)
                if (A[i] == A[j])
                {
                    b[i] = 0;
                    b[j] = -1;
                }
        }
    }
    int dem = 0;
    for (i = 0; i < A.size(); i++)
    {
        if (b[i] != -1)
        {
            dem++;
        }
    }
    cout << dem;
}