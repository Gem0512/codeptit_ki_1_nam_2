#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tu;
    long long mau;
};
void nhap(PhanSo &PS)
{
    cin >> PS.tu;
    cin >> PS.mau;
}
void rutgon(PhanSo &PS)
{
    long long uoc = __gcd(PS.tu, PS.mau);
    PS.tu = PS.tu / uoc;
    PS.mau = PS.mau / uoc;
}
void in(PhanSo &PS)
{
    cout << PS.tu << "/" << PS.mau;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}