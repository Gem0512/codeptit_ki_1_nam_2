#include <bits/stdc++.h>
using namespace std;
int b[100009] = {0};
int kt(string ss)
{
    if (ss.size() == 1)
        return 0;
    for (int i = 0; i < ss.size() / 2; i++)
    {
        if (ss[i] != ss[ss.size() - i - 1])
            return 0;
    }
    return 1;
}
int check(string s1, string s2)
{
    if (s1.size() < s2.size())
        return 1;
    if (s1.size() > s2.size())
        return 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] < s2[i])
            return 1;
    }
    return 0;
}
struct sv
{
    string s;
    int stt;
    int length;
};
int main()
{
    struct sv a[10009], s1[10009];
    int x = 0, dem = 0;
    while (cin >> a[x].s)
    {
        a[x].length = a[x].s.size();
        x++;
        //		dem++;
        //		if(dem>39)break;
    }
    int z = 0;
    for (int i = 0; i < x; i++)
    {

        if (kt(a[i].s) == 1 && a[i].length > 1)
        {
            for (int j = i + 1; j < x; j++)
            {
                if (a[i].s == a[j].s)
                {
                    b[z]++;

                    a[j].length = 1;
                }
            }
            s1[z].s = a[i].s;
            s1[z].length = a[i].length;
            s1[z].stt = b[z];
            z++;
        }
    }
    for (int i = 0; i < z; i++)
    {
        for (int j = i + 1; j < z; j++)
        {
            if (check(s1[i].s, s1[j].s))
                swap(s1[i], s1[j]);
        }
    }

    for (int i = 0; i < z; i++)
    {
        cout << s1[i].s << " " << s1[i].stt + 1 << endl;
    }
}
