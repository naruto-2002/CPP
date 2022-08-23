#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
	string lop;
	int ngay;
	int thang;
	int nam;
	float GPA;
};
void nhapThongTinSV(struct SinhVien &a){
	getline(cin, a.name);
	char s;
	cin >> a.lop >> a.ngay >> s >> a.thang >> s >> a.nam >> a.GPA;
}
void inThongTinSV(struct SinhVien &a){
	cout << "N20DCCN001" << ' ' << a.name << ' ' << a.lop << ' ';
	cout <<(a.ngay < 10 ? "0" : "") << a.ngay << '/' << (a.thang < 10 ? "0" : "") << a.thang <<  '/' << a.nam << ' ' ;
	cout << fixed << setprecision(2) << a.GPA;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

