#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name;
	int ngay;
	int thang;
	int nam;
	float point1;
	float point2;
	float point3;
};
void nhap(ThiSinh &p)
{
	char c;
	getline(cin,p.name);
	
	cin>>p.ngay>>c>> p.thang>>c>> p.nam;
	
	cin>>p.point1>>p.point2>>p.point3;
}
void in(ThiSinh &p)
{
	cout<<p.name<<' ';
	cout<<p.ngay<<'/'<<p.thang<<'/'<<p.nam;
	cout<<' '<<fixed<<setprecision(1)<<p.point1+p.point2+p.point3;
}




int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

