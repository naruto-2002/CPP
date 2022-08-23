#include<bits/stdc++.h>
using namespace std;
void hop(int n, int m, int a[], int b[]){
	set<int> s;
	for(int i=0; i<n; i++){
		s.insert(a[i]);
	}
	for(int i=0; i<m; i++){
		s.insert(b[i]);
	}
	set<int> :: iterator it;
	for(it=s.begin() ;it!=s.end(); it++){
		cout<<*it<<' ';
	}
}
void giao(int n, int m, int a[], int b[]){
	set<int> s1,s2;
	for(int i=0; i<n; i++){
		s1.insert(a[i]);
	}
	for(int i=0; i<m; i++){
		s2.insert(b[i]);
	}
	set<int> :: iterator it;
	if(n>m){
		for( it=s1.begin(); it!=s1.end(); it++){
			if(s2.count(*it)) cout<<*it<<' ';
		}
	}else{
		for( it=s2.begin(); it!=s2.end(); it++){
			if(s1.count(*it)) cout<<*it<<' ';
	    }
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<m; i++) cin>>b[i];
		hop(n,m,a,b);
		cout<<endl;
		giao(n,m,a,b);
		cout<<endl;
	}
}

