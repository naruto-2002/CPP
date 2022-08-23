#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int a1, b1, c1;
		int a2, b2, c2;
		int a3, b3, c3;
		int a4, b4, c4;
		cin >> a1 >> b1 >> c1;
		cin >> a2 >> b2 >> c2;
		cin >> a3 >> b3 >> c3;
		cin >> a4 >> b4 >> c4;
	    int aa1 = a1 - a2, bb1 = b1 - b2, cc1 = c1 - c2;
		int aa2 = a2 - a3, bb2 = b2 - b3, cc2 = c2 - c3;
		int aa3 = a3 - a4, bb3 = b3 - b4, cc3 = c3 - c4;
		int a = bb1*cc2 - bb2*cc1, b = aa2*cc1 - aa1*cc2, c = aa1*bb2 - aa2*bb1;
		if(a*aa3 + b*bb3 + c*cc3 == 0) cout << "YES";
		else cout << "NO";
		cout << '\n'; 
	}
}

