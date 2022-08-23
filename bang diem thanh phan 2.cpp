#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string msv;
	string ten;
	string lop;
	float diem1;
	float diem2;
	float diem3;
}p;
int comp(p a, p b){
	return a.ten + b.ten < b.ten + a.ten;
}
main(){
	int t;
	cin >> t;
	p q[101];
	int dem = 0;
	int n = t;
	while(t--){
		string c;
		getline(cin, c);
		getline(cin, q[dem].msv);
		getline(cin, q[dem].ten);
		getline(cin, q[dem].lop);
		cin >> q[dem].diem1;
		cin >> q[dem].diem2 ;
		cin >> q[dem].diem3;
		dem++;
	}
	sort(q, q + dem, comp);
	for(int i = 0 ; i < dem; i++){
		cout << i+1 << ' ' << q[i].msv << ' ' << q[i].ten << ' ' << q[i].lop << ' '<< fixed << setprecision(1) << q[i].diem1 << ' ' << fixed << setprecision(1) << q[i].diem2 << ' ' << fixed << setprecision(1) << q[i].diem3 << endl;
	}
	
}

