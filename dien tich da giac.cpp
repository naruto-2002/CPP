#include<bits/stdc++.h>
using namespace std;
double a[1001][2];
main(){
	int test;
	cin >> test;
	while(test--){
		int t;
		cin >> t;
		for(int i = 0; i < t; i++){
			for(int j = 0; j < 2; j++){
				cin >> a[i][j];
			}
		}
		double sumdt = 0;
		for(int i = 1; i < t - 1; i++){
			double c1 = sqrt((a[0][0] - a[i][0])*(a[0][0] - a[i][0]) + (a[0][1] - a[i][1])*(a[0][1] - a[i][1]));
			double c2 = sqrt((a[0][0] - a[i + 1][0])*(a[0][0] - a[i + 1][0]) + (a[0][1] - a[i + 1][1])*(a[0][1] - a[i + 1][1]));
			double c3 = sqrt((a[i][0] - a[i + 1][0])*(a[i][0] - a[i + 1][0]) + (a[i][1] - a[i + 1][1])*(a[i][1] - a[i + 1][1]));
			double p =(c1+c2+c3)/2;
			sumdt += sqrt(p*(p - c1)*(p - c2)*(p - c3));
		}
		cout << fixed << setprecision(3) << sumdt << endl;
	}
}

