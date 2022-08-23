#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name;
	string clas;
	int day;
	int month;
	int year;
	float GPA;
};



void nhap(SinhVien ds[50], int t){
	int count = 0;
	int n = t;
	while(t--){
		char c;
		string s;
		getline(cin, s);
		getline(cin, ds[count].name);
		getline(cin, ds[count].clas);
		cin >> ds[count].day;
		cin >> c;
		cin >> ds[count].month;
		cin >> c;
		cin >> ds[count].year;
		cin >> ds[count].GPA;
		count ++;
	}
}
void in(SinhVien ds[50], int n){
	for(int i=0; i < n; i++){
		cout << "B20DCCN0" << (i < 9 ? "0" : "") <<i + 1<< ' ';
		cout << ds[i].name << ' ' << ds[i].clas << ' ';
		cout << (ds[i].day < 10 ? "0" : "") << ds[i].day << '/' << (ds[i].month < 10 ? "0" : "") << ds[i].month << '/' << ds[i].year << ' ';
		cout << fixed << setprecision(2) << ds[i].GPA << endl;
			
	}
}





int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

