#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		long long kq[n]; 
		for(int i = 0; i < n; i++){
			 cin >> a[i];
			 kq[i] = a[i]; 
		}
		for(int i = 1; i < n ; i++){
			for(int j = 0; j < i; j++){
				if(a[j] < a[i] && kq[i] < kq[j] + a[i]){
						 kq[i] = kq[j] + a[i];
					}
			}
		}
		sort(kq, kq + n);
		cout << kq[n - 1] << '\n';
	}
}

