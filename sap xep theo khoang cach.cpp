#include<bits/stdc++.h>
using namespace std;
struct data{
	int i;
	int kc;
	int c;
};
int comp(data a, data b){
	if(a.kc>b.kc) return 0;
	if(a.kc==b.kc && a.i>b.i ) return 0;
	return 1;
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<data> v;
		int k;
		for(int i=0; i<n; i++) {
			cin>>k;
		    v.push_back({i,abs(k-x),k});
		}
		stable_sort(v.begin(),v.end(),comp);
		for(int i=0; i<n; i++) cout<<v[i].c<<' ';
		cout<<endl;
    }
}


