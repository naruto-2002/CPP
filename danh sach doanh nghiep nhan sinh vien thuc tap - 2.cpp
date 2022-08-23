#include<bits/stdc++.h>
using namespace std;
class SVTT{
	public:
		string businesscode;
		string businessname;
		int studentid;
		friend istream &operator >> (istream &is, SVTT &p){
			is >> p.businesscode;
			scanf("\n");
			getline(is, p.businessname);
			is >> p.studentid;
			return is;
		}
		friend ostream &operator << (ostream &os, SVTT p){
			os << p.businesscode << ' ' << p.businessname << ' ' << p.studentid << '\n';
			return os;
		}
};
int comp(SVTT a, SVTT b){
	if(a.studentid == b.studentid) return a.businesscode + b.businesscode < b.businesscode + a.businesscode;
	return a.studentid > b.studentid;
}
main(){
	SVTT p[1001];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> p[i];
	sort(p, p + n, comp);
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		for(int i = 0; i < n; i++){
			if(p[i].studentid >= a && p[i].studentid <= b){
				cout << p[i];
			}
		}
	}
	
}
