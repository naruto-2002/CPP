#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[10002]={0};
		for(int i=0; i<n; i++) cin>>arr[i];
		int a,b;
		cin>>a>>b; 
		int ok=1;
		int sum=0;
		for(int i=a; i<b; i++){
			if(arr[i]>arr[i+1]){
				ok=0;
				break;
			}
			if(arr[i]<arr[i+1]){
				break;
			}
		}
		for(int i=a; i<b; i++){
			if(arr[i]==arr[i+1]==arr[i+2]){
				ok=0;
				break;
			}
		}
		int k=0;
		if(ok==1){
			for(int i=a; i<b; i++){
				if(arr[i]>arr[i+1]){
					k=i+1;
					break;
				}
			}
		}
		if(k!=0){
			for(int i=k; i<b; i++){
				if(arr[i]<arr[i+1]){
					ok=0;
					break;
				}
			}
		}
		if(ok==1) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	
}

