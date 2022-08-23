#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	int m;
	cin >> m;
	int b[n][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cin >> b[i][j];
		}
	}
	int h=0;
	int k=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] * b[h][k] << ' ';
			k++;
			if(k == m) k=0;
		}
		h++;
		if(h == m) h=0;
		cout << endl;
	}
}

