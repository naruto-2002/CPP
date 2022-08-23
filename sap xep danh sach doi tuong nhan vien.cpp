#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	public:
		string mnv;
		string name;
		string sex;
		char birth[25];
		int ngay, thang, nam;
		string adress;
		string tax;
		string deat;
		friend istream &operator >> (istream &, NhanVien &);
		friend ostream &operator << (ostream &, NhanVien &);	
};
int dem = 0;
istream &operator >> (istream &is, NhanVien &nv){
	if(++dem < 10) nv.mnv += "0000" + to_string(dem);
	else nv.mnv += "000" + to_string(dem);
	scanf("\n");
	getline(is, nv.name);
	is >> nv.sex ;
	scanf("\n");
	is >> nv.birth;
	scanf("\n");
	getline(is, nv.adress);
	is >> nv.tax;
	is >> nv.deat;
	char s[25], *p;
	strcpy(s, nv.birth);
	int count = 0;
	for(p = strtok(s, "/"); p != NULL; p = strtok(NULL, "/") ){
		++count;
		if(count == 1) nv.thang = atoi(p);
		else if(count == 2) nv.ngay = atoi(p);
		else if(count == 3) nv.nam = atoi(p);
	}
	
	
	
	
	
	
	return is;
}
ostream &operator << (ostream &os, NhanVien &nv){
	os << nv.mnv << ' ';
	os << nv.name << ' ' << nv.sex << ' ' ;
	os << nv.birth << ' ';
	os << nv.adress << ' ' << nv.tax << ' ';
	os << nv.deat << endl;
	return os;
}

void swap(NhanVien &A, NhanVien &B){
	NhanVien temp=A;
	A=B;
	B=temp;
}
 
void sapxep(NhanVien ds[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].nam>ds[j].nam) swap(ds[i],ds[j]);
			else if(ds[i].nam==ds[j].nam){
				if(ds[i].thang>ds[j].thang) swap(ds[i],ds[j]);
				else if(ds[i].thang==ds[j].thang){
					if(ds[i].ngay>ds[j].ngay) swap(ds[i],ds[j]);
				}
			}
		}
	}
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
