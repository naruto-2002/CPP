#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
			string s;
			int n;
			cin >> s >> n;
			set <char> ss,ss1;
			int len = s.length();
			int count = 0;
			for(int i = 0; i < len; i++){
				for(int j = i; j < len; j++){
						ss.insert(s[j]);
						if(ss.size() == n){
							count++;
						}
				}
				ss.clear();
			}
				cout << count << endl;
	}
}

