#include<bits/stdc++.h>
using namespace std;
int kt(int a[],int n,int x){
	set<int> s;
	for(int i=0; i<n; i++){
		s.insert(a[i]);
	}
	for(set<int> :: iterator it=s.begin(); it!=s.end(); it++)
	{
		int temp=*it+x;
		if(s.find(temp)!=s.end()) return 1;
	}
	return 0;	
		
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		if(kt(a,n,x)) cout<<1;
		else cout<<-1;
		cout<<endl;
	}
}



