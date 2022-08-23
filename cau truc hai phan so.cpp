#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(PhanSo& p)
{
	cin>>p.tu>>p.mau;
}

void rutgon(PhanSo& p)
{
	long long u=__gcd(p.tu,p.mau);
	p.tu=p.tu/u;
	p.mau=p.mau/u;
}
PhanSo tong(PhanSo& p, PhanSo& q)
{
	PhanSo t;
	rutgon(p);
	rutgon(q);
	t.tu=q.mau*p.tu+p.mau*q.tu;
	t.mau=p.mau*q.mau;
	rutgon(t);
	return t;
}
void in(PhanSo& p)
{
		cout<<p.tu<<'/'<<p.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}


