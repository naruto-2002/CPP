#include<bits/stdc++.h>
using namespace std;
int comp(string a, string b){
	int n = a.length();
	int m = b.length();
	return n < m;
}
string str[100001];
main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> str[i];
	sort(str, str + n, comp);
	int count = 0;
	for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n ; j++){
			if(str[j].find(str[i]) != string :: npos){
				count++;
				if(str[i].length() == str[j].length()){
					count++;
				}
			}
		}
	}
	cout << count;
}


