#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	int stt;
	char name[500];
	string clas;
	int day;
	int month;
	int year;
	float GPA;
};
int comp(SinhVien a, SinhVien b){
	return a.GPA > b.GPA;
}



void nhap(SinhVien ds[50], int t){
	int count = 0;
	int n = t;
	while(t--){
		char c;
		string s;
		getline(cin, s);
		ds[count].stt = count + 1;
		fgets(ds[count].name, 499, stdin);
		ds[count].name[strlen(ds[count].name) - 1] = '\0';
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
void sapxep(SinhVien ds[50], int n){
	sort(ds, ds + n, comp);
}
string xuly(char s[500]){
	string ss = "";
	char *p;
	p = strtok(s," ");
	while(p != NULL){
		p[0] = toupper(p[0]);
		for(int i = 1; i < strlen(p); i++){
			p[i] = tolower(p[i]);
		}
		ss += p;
		ss += ' ';
		p = strtok(NULL, " ");
	}
	return ss;
}
void in(SinhVien ds[50], int n){
	for(int i=0; i < n; i++){
		string ss = xuly(ds[i].name);
		cout << "B20DCCN0" << (ds[i].stt < 10 ? "0" : "") <<ds[i].stt<< ' ';
		cout << ss << ds[i].clas << ' ';
		cout << (ds[i].day < 10 ? "0" : "") << ds[i].day << '/' << (ds[i].month < 10 ? "0" : "") << ds[i].month << '/' << ds[i].year << ' ';
		cout << fixed << setprecision(2) << ds[i].GPA << endl;
			
	}
}





int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

