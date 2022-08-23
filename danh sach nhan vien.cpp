#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
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
void nhap(NhanVien& p)
{
	char c;
	scanf("%c",&c);
	getline(cin,p.name);
	if(p.name=="\n")
	{
		getline(cin,p.name);
	}
	cin>>p.gioitinh;
	cin>>p.ngay>>c>> p.thang>>c>> p.nam;
	scanf("%c",&c);
	getline(cin,p.diachi);
	cin>>p.ma;
	cin>>p.ngay1>>c>> p.thang1>>c>> p.nam1;
	
}
void inds(NhanVien p[],int n)
{
 	for(int i=0; i<n; i++)
 	{
 		if(i+1>9)
 		{
 			cout<<"000"<<i+1<<' ';
		 }
		 else
		 {
		 	cout<<"0000"<<i+1<<' ';
		 }
		cout<<p[i].name<<' '<<p[i].gioitinh<<' ';
		cout<<(p[i].ngay<10 ? "0":"" )<<p[i].ngay<<'/'<<(p[i].thang<10? "0":"")<<p[i].thang<<'/'<<p[i].nam<<' ';
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
    inds(ds,N);
    return 0;
}




