#include<bits/stdc++.h>
using namespace std;
int comp(string a, string b){
	if(a.length() > b.length()) return 1;
	else if(a.length() < b.length()) return 0;
	else{
		for(int i=0; i < a.length(); i++){
			if(a[i] > b[i]) return 1;
			if(a[i] < b[i]) return 0;
		}
	}
}
int reversible(char s[51]){
	int len = strlen(s);
	if(len == 1) return 0;
	for(int i=0; i < len; i++){
		if(s[i] != s[--len]){
			return 0;
		}
	}
	return 1;	
}
main(){
    string s2[1001];
    char s[51];
	long long count = 0;
	while(cin >> s){
		if(reversible(s)){
			s2[count++] = s;
		}
	}
	sort(s2, s2 + count, comp);
	int dem[1000];
	int q=0;
	for(int i = 0; i < count; i++){
		for(int j = i + 1; j < count; j++){
			if(s2[i] == s2[j]){
				s2[j] = " ";
				q++;
			}
		}
		dem[i] = q;
		q=0;
	}
	for(int i = 0; i < count; i++){
		if(s2[i] != " "){
			cout << s2[i] << ' ' << dem[i] + 1<< '\n';
		}
	}
	
}





