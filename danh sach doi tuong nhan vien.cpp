#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	int stt;
	string name;
	string gioitinh;
	int ngay;
	int thang;
	int nam;
	string diachi;
	long long ma;
	int ngay1;
	int thang1;
	int nam1;
};
void nhap(NhanVien& p){
	char c;
	scanf("%c",&c);
	getline(cin,p.name);
	if(p.name=="\n"){
		getline(cin,p.name);
	}
	cin>>p.gioitinh;
	cin>>p.thang>>c>> p.ngay>>c>> p.nam;
	scanf("%c",&c);
	getline(cin,p.diachi);
	cin>>p.ma;
	cin>>p.ngay1>>c>> p.thang1>>c>> p.nam1;
	
}
int comp(NhanVien a, NhanVien b){
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

void sapxep(NhanVien p[50], int n){
	for(int i = 0; i < n; i++){
		p[i].stt = i + 1;
	}
	sort(p, p + n, comp);
}
void inds(NhanVien p[],int n){
 	for(int i=0; i<n; i++){
 	    cout<<"000"<<(p[i].stt < 10 ? "0" : "") << p[i].stt << ' ';
		cout<<p[i].name<<' '<<p[i].gioitinh<<' ';
		cout<<(p[i].thang<10? "0":"")<<p[i].thang<<'/'<<(p[i].ngay<10 ? "0":"" )<<p[i].ngay<<'/'<<p[i].nam<<' ';
		cout<<p[i].diachi<<' ';
		cout<<p[i].ma<<' ';
		cout<<(p[i].ngay1<10 ? "0":"" )<<p[i].ngay1<<'/'<<(p[i].thang1<10? "0":"")<<p[i].thang1<<'/'<<p[i].nam1<<' ';
		cout<<endl;
	}
	
}



int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}





