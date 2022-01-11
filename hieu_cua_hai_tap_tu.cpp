#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string kq[1005];
        string s1;
        string s2;
        getline(cin, s1);
        getline(cin, s2);
        vector<string> A;
        vector<string> B;
        stringstream C(s1);
        stringstream D(s2);
        string a;
        string b;
        while (C >> a)
            A.push_back(a);
        while (D >> b)
            B.push_back(b);
        int danhdau[1000] = {0};
        int i, j;
        for (i = 0; i < A.size(); i++)
        {
            if (danhdau[i] == 0)
            {
                danhdau[i] = 1;
                for (int j = i + 1; j < A.size(); j++)
                    if (A[i] == A[j])
                    {
                        danhdau[i]++;
                        danhdau[j] = -1;
                    }
            }
        }
        int k = 0;
        for (int i = 0; i < A.size(); i++)
        {
            int kt = 1;
            for (int j = 0; j < B.size(); j++)
            {
                if (A[i] == B[j])
                {
                    kt = 0;
                    break;
                }
            }
            if (kt == 1 && danhdau[i] > 0)
            {
                kq[k++] = A[i];
            }
            sort(kq, kq + k);
        }
        for (int i = 0; i < k; i++)
        {
            cout << kq[i] << " ";
        }
        cout << endl;
    }
}