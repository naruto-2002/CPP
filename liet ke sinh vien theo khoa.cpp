#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string msv;
	string name;
	string lop;
	string email;
}SV;
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
	int t;
	cin >> t;
	string ss[10001];
    for(int i = 0; i < t; i++){
    	cin >> ss[i];
	}
	for(int j = 0; j < t; j++){
		cout << "DANH SACH SINH VIEN LOP" << ' ' << ss[j] << ":" << endl;
		for(int i = 0; i < n; i++){
			if(p[i].lop == ss[j]){
				cout << p[i].msv << ' ' << p[i].name << ' ' << p[i].lop << ' ' << p[i].email << endl;
			}
	    }
	}
}
