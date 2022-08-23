#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,ok=1;
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(sqrt(a[i]*a[i]+a[j]*a[j])==(long long)sqrt(a[i]*a[i]+a[j]*a[j])){
					for(int y=j+1; y<n; y++){
						if(a[i]*a[i]+a[j]*a[j]==a[y]*a[y]){
							cout<<"YES";
							ok=0;
							break;
						}
					}
				}
				if(ok==0) break;
			}
			if(ok==0) break;
		}
		if(ok==1) cout<<"NO";
		cout<<endl;
	}
}

