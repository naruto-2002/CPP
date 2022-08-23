#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	public:
	long long tu,mau;
	PhanSo(long long a=0,long long b=1){
		tu=a;
		mau=b;
	}
	void rutgon(){
		long long k=__gcd(tu,mau);
		tu/=k;
		mau/=k;
	}
	friend istream &operator>>(istream &input,PhanSo &a){
		cin>>a.tu>>a.mau;
		return input;
	}
	friend ostream &operator<<(ostream &output,PhanSo a){
		cout<<a.tu<<"/"<<a.mau;
		return output;
	}
	friend PhanSo operator + (PhanSo a, PhanSo b){
		PhanSo c;
		c.tu = a.tu*b.mau + b.tu*a.mau;
		c.mau = a.mau*b.mau;
		c.rutgon();
		return c;
	}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}



