#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	string s2[100];
	string s1 = "";
	long long count = 0;
	while(cin >> s){
		if(s[s.length() - 1] == '.' || s[s.length() - 1] == '!' || s[s.length() - 1] == '?'){
			s[s.length() - 1] = ' ';
			s1 += s;
			s2[count++] = s1;
			s1 = "";
		}else{
			s1 += s;
			s1 += " ";
		}
	}
	for(int i=0; i < count; i++){
		s2[i][0] = toupper(s2[i][0]);
		for(int j = 1;  j < s2[i].length(); j++){
			s2[i][j] = tolower(s2[i][j]);
		}
		cout << s2[i] << '\n';
	}
}


