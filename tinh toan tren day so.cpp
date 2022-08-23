#include <bits/stdc++.h>
using namespace std;
const long long u = 1000000007;
long long poww(long long n,long long k,long long mod){
	if(k==1) return n;
	long long x=poww(n,k/2,mod);
	if(k%2==0) return (x*x)%mod;
	else return (((x*x)%mod)*n)%mod;
}
main(){
	int t;
	cin >> t; 
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		long long hx = 1;
		for(int i = 0; i < n; i++){
			hx *= a[i];
			hx %= u;
		}
	    long long gx = a[0];
		for(int i = 1; i < n; i++){
		       gx = __gcd(gx, a[i]);
		}
		cout << poww(hx,gx,u);
		cout << endl;
		
		
	}
}

