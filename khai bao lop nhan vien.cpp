#include<bits/stdc++.h>
#define a() a
using namespace std;
class NhanVien{
	private:
		string name;
		string sex;
		int ngay;
		int thang;
		int nam;
		string address;
		string mst;
		int ngay1;
		int thang1;
		int nam1;
	public:
		NhanVien();
		friend istream &operator >> (istream &, NhanVien &);
		friend ostream &operator << (ostream &, NhanVien &);
};

NhanVien:: NhanVien(){
	this->name = '\0';
	this->sex = '\0';
	this->ngay = 0;
	this->thang = 0;
	this->nam = 0;
	this->address = '\0';
	this->mst = '\0';
	this->ngay1 = 0;
	this->thang1 = 0;
	this->nam1 = 0;
}

istream &operator  >> (istream &is, NhanVien &a){
	getline(is, a.name);
	char s;
	is >> a.sex >> a.ngay >> s >> a.thang >> s >> a.nam ;
	string ss;
	getline(is, ss);
	getline(is, a.address);
	is >> a.mst;
	is >> a.ngay1 >> s >> a.thang1 >> s >> a.nam1 ;
	return is;
}
ostream &operator << (ostream &os, NhanVien &a){
	os << "00001" << ' ' << a.name << ' ' << a.sex << ' ';
	os <<(a.ngay < 10 ? "0" : "") << a.ngay << '/' << (a.thang < 10 ? "0" : "") << a.thang <<  '/' << a.nam << ' ' ;
	os << a.address << ' ' << a.mst << ' ';
	os <<(a.ngay1 < 10 ? "0" : "") << a.ngay1 << '/' << (a.thang1 < 10 ? "0" : "") << a.thang1 <<  '/' << a.nam1 << ' ' ;
	return os;
}
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}

