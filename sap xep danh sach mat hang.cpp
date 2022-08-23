#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int stt;
	string name;
	string group;
	float benefit;
}p;
int comp(p a, p b){
	return a.benefit > b.benefit;
}
main(){
	p q[100];
	int t;
	cin >> t;
	int dem = 0;
	while(t--){
		string ss;
		getline(cin, ss);
		q[dem].stt = dem +1;
		getline(cin, q[dem].name);
		getline(cin, q[dem].group);
		float a,b;
		cin >> a >> b;
		q[dem].benefit = b - a;
		dem ++;
	}
	sort(q, q + dem, comp);
	for(int i = 0; i < dem; i++){
		cout << q[i].stt << ' ' << q[i].name << ' ' << q[i].group << ' ' << fixed << setprecision(2) << q[i].benefit << endl;
	}
}

