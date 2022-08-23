#include<bits/stdc++.h>
using namespace std;
int TH1(string a){
	if(a[5]<a[6]&&a[6]<a[7]&&a[7]<a[9]&&a[9]<a[10]) return 1;
	else return 0;
}
int TH2(string a){
	if(a[5]==a[6]&&a[6]==a[7]&&a[7]==a[9]&&a[9]==a[10]) return 1;
	else return 0;
}
int TH3(string a){
	if(a[5]==a[6]&&a[6]==a[7]&&a[9]==a[10]) return 1;
	else return 0;
}
int TH4(string a){
	for(int i=5; i<=7; i++){
		if(a[i]!='6'&&a[i]!='8'){
			return 0;
		}
	}
	for(int i=9; i<=10; i++){
		if(a[i]!='6'&&a[i]!='8'){
			return 0;
		}
	}
	return 1;
}
main(){
	int t;
	scanf("%d ",&t);
	while(t--)
	{
		string a;
		getline(cin,a);
		if(TH1(a)||TH2(a)||TH3(a)||TH4(a)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

