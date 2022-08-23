#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int diem1=0,diem2=0;
		for(int i=0; i<n; i++){
			if(b[i]!=a[i]){
				diem1=i+1;
				break;
			}
		}
		for(int i=n-1; i>0; i--){
			if(b[i]!=a[i]){
				diem2=i+1;
				break;
			}
		}
		cout<<diem1<<' '<<diem2<<endl;
	}
}

