#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int c[10001];
        int d[10001];
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		int count = 0;
		int dem = 0;
		for(int i = 0; i < n; i++){
			int *p = find(b, b + m, a[i]);
			if(p-b != m){
				c[count++] = p-b;
			}else{
				d[dem++] = a[i];
			}
		}
		sort(c, c + count);
		sort(d, d + dem);
		for(int i = 0; i < count; i++){
			cout << b[c[i]] <<' ';
		}
		for(int i = 0; i < dem; i++){
			cout << d[i] << ' ';
		}
		cout << '\n';
	}
	
}

