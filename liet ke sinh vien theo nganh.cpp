#include<bits/stdc++.h>
using namespace std;
struct SV{
	string msv;
	string name;
	string lop;
	string email;
	string nganh;
};
main(){
	struct SV p[1005];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> p[i].msv;
		scanf("\n");
		getline(cin, p[i].name);
		cin >> p[i].lop >> p[i].email;
		string s = p[i].msv.substr(3,4);
		if(s == "DCKT"){
			p[i].nganh = "Ke toan";
		}
		if(s == "DCCN"){
			p[i].nganh = "Cong nghe thong tin";
		}
		if(s == "DCAT"){
			p[i].nganh = "An toan thong tin";
		}
		if(s == "DCVT"){
			p[i].nganh = "Vien thong";
		}
		if(s == "DCDT"){
			p[i].nganh = "Dien tu";
		}
	}
	int t;
	cin >> t;
    for(int i = 0; i < t; i++){
        string ss = "", sss = "";   	
    	scanf("\n");
    	getline(cin, ss);
		sss = ss;		    	
    	for(int k = 0; k < sss.size(); k++){
    		 sss[k] = toupper(sss[k]);
		}
		cout << "DANH SACH SINH VIEN NGANH" << " " << sss << ":\n";
		if(ss == "An toan thong tin" || ss == "Cong nghe thong tin"){
			for(int j = 0; j < n; j++){
				if(p[j].nganh == ss && p[j].lop[0] != 'E'){
					cout << p[j].msv << " " << p[j].name << " " << p[j].lop << " " << p[j].email << endl;
				}
			}
		}else {
			for(int j = 0; j < n; j++){
				if(p[j].nganh == ss){
					cout << p[j].msv << " " << p[j].name << " " << p[j].lop << " " << p[j].email << endl;
				}
			}
		}
	}
	
}
