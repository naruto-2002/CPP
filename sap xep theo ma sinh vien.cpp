#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string msv;
	string name;
	string lop;
	string email;
}SV;
bool comp(SV a, SV b){
	return a.msv + b.msv < b.msv + a.msv;
}
main(){
	SV p[1001];
	int i = 0;
	while(cin >> p[i].msv){
		scanf("\n");
		getline(cin, p[i].name);
		cin >> p[i].lop;
		cin >> p[i].email;
		i++;
	}
	sort(p, p + i + 1, comp);
	for(int j = 0; j < i + 1; j++){
		cout << p[j].msv << ' ' << p[j].name << ' ' << p[j].lop << ' ' << p[j].email << endl;
	}
}

