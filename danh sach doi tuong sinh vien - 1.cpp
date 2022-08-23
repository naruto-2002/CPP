#include<bits/stdc++.h>
using namespace std;
int dem = 0;
class SinhVien{
	private:
		string name;
		string lop;
		int day;
		int month;
		int year;
		float GPA;
	public:
		friend istream &operator >> (istream &, SinhVien &);
		friend ostream &operator << (ostream &, SinhVien &);
		
};
istream &operator >> (istream &is, SinhVien &sv){
	char c;
    scanf("%c",&c);
	getline(is, sv.name);
	char s;
	is >> sv.lop >> sv.day >> s >> sv.month >> s >> sv.year >> sv.GPA;
	return is;
}
ostream &operator << (ostream &os, SinhVien &sv){
	dem++;
	os << "B20DCCN0" << (dem < 10 ? "0" : "") << dem << ' ';
	os << ' ' << sv.name << ' ' << sv.lop << ' ';
	os << (sv.day < 10 ? "0" : "") << sv.day << '/' << (sv.month < 10 ? "0" : "") << sv.month << '/' << sv.year << ' ';
	os << fixed << setprecision(2) << sv.GPA << endl;
	return os;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
