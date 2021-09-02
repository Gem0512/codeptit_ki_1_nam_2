#include <iostream>
#include <string>
using namespace std;
struct sinhnhat
{
    string hoten;
    string date;
};
int main()
{
    int n;
    sinhnhat sn[100];
    long long a[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> sn[i].hoten >> sn[i].date;
        a[i] = (sn[i].date[0] * 10 + sn[i].date[1]) + (sn[i].date[3] * 10 + sn[i].date[4]) * 30 + (sn[i].date[6] * 1000 + sn[i].date[7] * 100 + sn[i].date[8] * 10 + sn[i].date[9]) * 365;
    }
    long long max = 0;
    long long min = 1e9;
    int max_vt, min_vt;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_vt = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            min_vt = i;
        }
    }
    cout << sn[max_vt].hoten << "\n"
         << sn[min_vt].hoten;
}