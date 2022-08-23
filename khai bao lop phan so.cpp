#include<bits/stdc++.h>
using namespace std;
class PhanSo {
	private:
		long long tu;
		long long mau;
	public:
		PhanSo();
		PhanSo(long long );
		PhanSo(long long ,long long );
		void rutgon();
		friend istream& operator >> (istream& input, PhanSo& p){
			input >> p.tu >> p.mau;
			return input;
		}
		
		friend ostream& operator << (ostream& output, PhanSo& p){
			output << p.tu << '/' << p.mau;
			return output;
		}
		
};

PhanSo:: PhanSo(){
	tu = 0;
	mau = 1;
}
PhanSo:: PhanSo(long long a){
	tu = a;
	mau = 1;
}
PhanSo:: PhanSo(long long a, long long b){
	tu = a;
	mau = b;
}
void PhanSo:: rutgon(){
	long long u = __gcd(tu, mau);
	tu = tu/u;
	mau = mau/u;
} 
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}


