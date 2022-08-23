#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string stt;
	string name;
	string subject;
	string subject1;
	string name1;
}gv;
bool comp(gv a, gv b){
	if(a.name1 == b.name1) return a.stt + b.stt < b.stt + a.stt;
	return a.name1 + b.name1 < b.name1 + a.name1;
}
main(){
	gv p[1001];
	int n;
	scanf("%d ",&n);
	for(int i = 0; i < n; i++){
		getline(cin, p[i].name);
		getline(cin, p[i].subject);
		if(i + 1 < 10) p[i].stt = "GV0" + to_string(i + 1);
		else p[i].stt = "GV" + to_string(i + 1);
		
		p[i].subject1 = "";
		p[i].subject1 += p[i].subject[0];
		for(int j = 1; j < p[i].subject.size(); j++){
			if(p[i].subject[j - 1] == ' '){
				p[i].subject1 += toupper(p[i].subject[j]);
			}
		}
		p[i].name1 = "";
		for(int j = 0; j < p[i].name.size(); j++){
			if(p[i].name[j] != ' '){
				p[i].name1 += p[i].name[j];
			}else{
				p[i].name1 = "";
			}
		}
	}
	sort(p, p + n, comp);
	for(int i = 0; i < n; i++){
		cout << p[i].stt << ' ' << p[i].name << ' ' << p[i].subject1 << endl;
	}
}
