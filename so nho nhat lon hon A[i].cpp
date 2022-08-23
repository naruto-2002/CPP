#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		long long c[n];
		vector<long long> b(n);
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
			c[i] = a[i];
		}
		sort(b.begin(), b.end());
		sort(c, c + n);
		for(int i = 0; i < n; i++){
			vector<long long> :: iterator it;
			it = upper_bound(b.begin(), b.end(), a[i]);
			long long m = *it;
			if(a[i] == c[n - 1]){
				cout << '_' <<  ' ';
			}else{
				cout << *it << ' ';
			}
		
		}
	
		cout << '\n';
	}
}

