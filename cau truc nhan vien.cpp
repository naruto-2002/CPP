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
void nhap(NhanVien &p)
{
	char c;
	getline(cin,p.name);
	cin>>p.gioitinh;
	cin>>p.ngay>>c>> p.thang>>c>> p.nam;
	scanf("%c",&c);
	getline(cin,p.diachi);
	cin>>p.ma;
	cin>>p.ngay1>>c>> p.thang1>>c>> p.nam1;
	
}
void in(NhanVien &p)
{
	cout<<"00001 ";
	cout<<p.name<<' '<<p.gioitinh<<' ';
	cout<<(p.ngay<10 ? "0":"" )<<p.ngay<<'/'<<(p.thang<10? "0":"")<<p.thang<<'/'<<p.nam<<' ';
	cout<<p.diachi<<' ';
	cout<<p.ma<<' ';
	cout<<(p.ngay1<10 ? "0":"" )<<p.ngay1<<'/'<<(p.thang1<10? "0":"")<<p.thang1<<'/'<<p.nam1<<' ';
	
}






int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

