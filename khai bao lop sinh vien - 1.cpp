#include<bits/stdc++.h>
#define a() a
using namespace std;
class SinhVien{
	public:
		string name;
		string lop;
		int ngay;
		int thang;
		int nam;
		float GPA;
		SinhVien();
};

SinhVien:: SinhVien(){
	this->name = '\0';
	this->lop = '\0';
	this->ngay = 0;
	this->thang = 0;
	this->nam = 0;
	this->GPA = 0;
}

void nhap(SinhVien &a){
	getline(cin, a.name);
	char s;
	cin >> a.lop >> a.ngay >> s >> a.thang >> s >> a.nam >> a.GPA;
}
void in(SinhVien &a){
	cout << "B20DCCN001" << ' ' << "Nguyen Van A" << ' ' << a.lop << ' ';
	cout <<(a.ngay < 10 ? "0" : "") << a.ngay << '/' << (a.thang < 10 ? "0" : "") << a.thang <<  '/' << a.nam << ' ' ;
	cout << fixed << setprecision(2) << a.GPA;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}

