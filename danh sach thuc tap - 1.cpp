#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int stt;
	string msv;
	string ten;
	string lop;
	string email;
	string firm;
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
		if(t == n - 1){
			string c;
			getline(cin, c);
		}
		q[dem].stt = dem + 1;
		getline(cin, q[dem].msv);
		getline(cin, q[dem].ten);
		getline(cin, q[dem].lop);
		getline(cin, q[dem].email);
		getline(cin, q[dem].firm);
		dem++;
	}
	sort(q, q + dem, comp);
	int t1;
	cin >> t1;
	while(t1--){
		string c;
		getline(cin, c);
		string s;
		cin >> s;
		for(int i = 0; i < dem; i++){
			if(q[i].firm == s){
				cout << q[i].stt << ' ' << q[i].msv << ' ' << q[i].ten << ' ' << q[i].lop << ' ' << q[i].email << ' ' << q[i].firm << endl;
			}
		}
	}
	
	
}

