#include<bits/stdc++.h>
using namespace std;
int comp(int a, int b){
	return a>b;
}
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[200]={0};
		for(int i=0; i<s.length(); i++){
			a[s[i]-'0']++;
		}
		int b[50],dem=0;
		for(int i=49; i<75; i++){
			if(a[i]!=0){
				b[dem++]=a[i];
			}
		}
		sort(b,b+dem,comp);
		int sum=0;
		for(int i=1; i<dem ; i++){
			sum+=b[i];
		}
		if(b[0]-sum>1) cout<<0;
		else cout<<1;
		cout<<endl;
	}
}

