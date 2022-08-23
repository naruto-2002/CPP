#include<bits/stdc++.h>
using namespace std;
int a[100001];
int c[100001] = {0};	
main(){
	int n,k,b;
	cin >> n >> k >> b;
	for(int i = 0; i < b ; i++) {
		cin >> a[i];
		c[a[i]] = 1;
	}
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += c[i];
	}
	int min = sum;
	for(int i = 1; i <= n - k ; i++){
		sum = sum - c[i] + c[i + k];
		if(sum < min) min = sum;
	}
	cout << min;
}

