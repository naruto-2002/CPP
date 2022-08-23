#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string stt;
	string name;
	string subject;
	string subject1;
}gv;
void mgv(gv p[], int i){
	if(i + 1 < 10) p[i].stt = "GV0" + to_string(i + 1);
	else p[i].stt = "GV" + to_string(i + 1);
}
void tenmon(gv p[], int i){
	p[i].subject1 = "";
		p[i].subject1 += p[i].subject[0];
		for(int j = 1; j < p[i].subject.size(); j++){
			if(p[i].subject[j - 1] == ' '){
				p[i].subject1 += toupper(p[i].subject[j]);
			}
		}
}
void slove(gv p[], int i, int n){
		string s = "", ss = "";
		scanf("\n");
		getline(cin, s);
		ss += s[0];
		for(int j = 1; j < s.size(); j++){
			if(s[j - 1] == ' '){
				ss += toupper(s[j]);
			}
		}
		cout << "DANH SACH GIANG VIEN BO MON " << ss << ':' << endl;
		for(int j = 0; j < n; j++){
			if(p[j].subject == s){
				cout << p[j].stt << ' ' << p[j].name << ' ' << p[j].subject1 << endl;
			}
		}
}
main(){
	gv p[1001];
	int n;
	scanf("%d ",&n);
	for(int i = 0; i < n; i++){
		getline(cin, p[i].name);
		getline(cin, p[i].subject);
		mgv(p, i);
		tenmon(p, i);
		
		
	}
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		slove(p, i, n);
	}
}
