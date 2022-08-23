#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		long long max = -1000000000000000000000;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] <= a[j]){
					if(j - i > max) max = j - i;
				}
				if(max >= n - i) break;
			}
			if(max >= n - i) break;
		}
		cout << max << endl;
	}
}


