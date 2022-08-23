#include<bits/stdc++.h>
#define a() a
using namespace std;
class SinhVien{
	private:
		string name;
		string lop;
		int ngay;
		int thang;
		int nam;
		float GPA;
	public:
		SinhVien();
		friend istream &operator >> (istream &, SinhVien &);
		friend ostream &operator << (ostream &, SinhVien &);
};

SinhVien:: SinhVien(){
	this->name = '\0';
	this->lop = '\0';
	this->ngay = 0;
	this->thang = 0;
	this->nam = 0;
	this->GPA = 0;
}

istream &operator  >> (istream &is, SinhVien &a){
	getline(is, a.name);
	char s;
	is >> a.lop >> a.ngay >> s >> a.thang >> s >> a.nam >> a.GPA;
	return is;
}
ostream &operator << (ostream &os, SinhVien &a){
	a.name[0] = toupper(a.name[0]);
	for(int i = 1; i < a.name.length(); i++){
		if(a.name[i - 1] == ' '){
			a.name[i] = toupper(a.name[i]);
		}else{
			a.name[i] = tolower(a.name[i]);
		}
		
	}
	os << "B20DCCN001" << ' ' << a.name << ' ' << a.lop << ' ';
	os <<(a.ngay < 10 ? "0" : "") << a.ngay << '/' << (a.thang < 10 ? "0" : "") << a.thang <<  '/' << a.nam << ' ' ;
	os << fixed << setprecision(2) << a.GPA;
	return os;
}
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}

