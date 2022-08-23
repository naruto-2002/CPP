#include<bits/stdc++.h>
using namespace std;
int result[10000001];
main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int ma = a[0];
		int count = 0;
		for(int i = 0; i < k; i++){
			if(a[i] > ma){
				ma = a[i];
			}
		}
		result[count++] = ma;
		for(int i = 1; i < n - k + 1; i++){
			if(ma != a[i - 1]){
				ma = max(ma, a[i + k -1]);
				result[count++] = ma;
			}else  if(a[i + k - 1] >= ma){
				ma = a[i + k - 1];
				result[count++] = ma;
			}else{
					ma = a[i];
					for(int j = i + 1; j < i + k; j++){
						if(a[j] > ma) ma = a[j];
					}
					result[count++] = ma;
			}
		}
		for(int i = 0; i < count; i++){
			cout << result[i] <<' ';
		}
		cout << '\n';
	}
}

