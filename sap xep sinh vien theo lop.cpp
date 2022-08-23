#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string msv;
	string name;
	string lop;
	string email;
}SV;
bool comp(SV a, SV b){
	if(a.lop == b.lop) return a.msv + b.msv < b.msv + a.msv;
	else return  a.lop + b.lop < b.lop + a.lop;
}
main(){
	SV p[1001];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p[i].msv;
		scanf("\n");
		getline(cin, p[i].name);
		cin >> p[i].lop >> p[i].email;
	}
	sort(p, p + n, comp);
	for(int i = 0; i < n; i++){
		cout << p[i].msv << ' ' << p[i].name << ' ' << p[i].lop << ' ' << p[i].email << endl;
	}
}
