#include<bits/stdc++.h>
using namespace std;
int dem1 = 1;
class SinhVien{
	private:
		int dem;
		string name;
		string lop;
		int day;
		int month;
		int year;
	public:
		float GPA;
		friend istream &operator >> (istream &, SinhVien &);
		friend ostream &operator << (ostream &, SinhVien &);
		
};
istream &operator >> (istream &is, SinhVien &sv){
	sv.dem = dem1;
	dem1++;
	cin.ignore(1000,'\n');
	getline(is, sv.name);
	char s;
	is >> sv.lop >> sv.day >> s >> sv.month >> s >> sv.year >> sv.GPA;
	return is;
}
ostream &operator << (ostream &os, SinhVien &sv){
	sv.name[0] = toupper(sv.name[0]);
	for(int i = 1; i < sv.name.length(); i++){
		if(sv.name[i - 1] == ' '){
			sv.name[i] = toupper(sv.name[i]);
		}else{
			sv.name[i] = tolower(sv.name[i]);
		}
	}
	os << "B20DCCN0" << (sv.dem < 10 ? "0" : "") << sv.dem << ' ';
	os << sv.name << ' ' << sv.lop << ' ';
	os << (sv.day < 10 ? "0" : "") << sv.day << '/' << (sv.month < 10 ? "0" : "") << sv.month << '/' << sv.year << ' ';
	os << fixed << setprecision(2) << sv.GPA << endl;
	return os;
}
float comp(SinhVien a, SinhVien b){
	return a.GPA > b.GPA;
}
void sapxep(SinhVien ds[50], int N){
	    sort(ds, ds + N, comp);
    }
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
