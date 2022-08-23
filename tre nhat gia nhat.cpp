#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string name;
	int ngay;
	int thang;
	int nam;
	
}p;
int comp(p a, p b){
	if(a.nam < b.nam) return 1;
	else if(a.nam == b.nam){
		if(a.thang < b.thang) return 1;
		else if(a.thang == b.thang){
			if(a.ngay < b.ngay) return 1;
			else if(a.ngay > b.ngay) return 0;
		}
		else return 0;
	}
	else return 0;
}

main(){
	int t;
	cin >> t;
	p q[101];
	int n=0;
	while(t--){
		char c;
		cin >> q[n].name >> q[n].ngay >> c >> q[n].thang >> c >> q[n].nam;
		n++;
	}
	sort(q, q + n, comp);
	cout << q[n -1].name << '\n' << q[0].name;
	
	
	
	
	
}

