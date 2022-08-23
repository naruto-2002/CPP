#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		long long n, m;
		cin >> n >> m;
		long long sum = (n*(1 + n))/2;
		if(sum > m && (sum + m) %2 == 0){
			long long sum1 = (sum + m)/2;
			long long sum2 = sum - sum1;
			if(__gcd(sum1, sum2) == 1) cout << "Yes";
			else cout << "No";
		}else{
			cout << "No";
		}
		cout << '\n';
	}
}

