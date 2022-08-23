#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		int b[100002]={0};
		for(int i=0; i<n; i++){
			set<int> v;
			for(int j=0; j<n; j++){
				cin>>a[i][j];
				v.insert(a[i][j]);
			}
			for(set<int> :: iterator it=v.begin(); it!=v.end(); it++){
				b[*it]++;
			}
		}
		set<int> s;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				s.insert(a[i][j]);
			}
		}
		int count=0;
		for(set<int> :: iterator it=s.begin(); it!=s.end(); it++){
			if(b[*it]==n) count++;
		}
		cout<<count<<endl;
	}
}

