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
void process(PhanSo& p, PhanSo& q){
	PhanSo sum = tong(p, q);
	sum.tu *= sum.tu;
	sum.mau *= sum.mau;
	PhanSo volume;
	volume.tu = p.tu * q.tu * sum.tu;
	volume.mau = p.mau * q.mau * sum.mau;
	rutgon(sum);
	cout << sum.tu << '/' << sum.mau << ' ' ;
	rutgon(volume);
	cout << volume.tu << '/' << volume.mau << endl;
	
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}

