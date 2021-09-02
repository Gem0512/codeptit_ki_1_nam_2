#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tu;
    long long mau;
};
void nhap(PhanSo &p)
{
    cin >> p.tu >> p.mau;
}
PhanSo tong(PhanSo p, PhanSo q)
{
    PhanSo c;
    c.tu = p.tu * q.mau + q.tu * p.mau;
    c.mau = p.mau * q.mau;
    long long uoc = __gcd(c.tu, c.mau);
    c.tu = c.tu / uoc;
    c.mau = c.mau / uoc;
    return c;
}
void in(PhanSo &p)
{
    cout << p.tu << "/" << p.mau;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}