#include<bits/stdc++.h>
using namespace std;
int tn(string s) {
	for(int i = 0;i<s.length();i++) {
		if(s[i]!=s[s.length()-i-1]) return 0;
	} return 1;
}
main () {
	int t;
	cin>>t;
	while(t--){
		
 string s;
 cin>>s;

for(int i = 0;i<s.length();i++) {
if(s[i]=='A'||s[i]=='B'||s[i]=='C'||s[i]=='a'||s[i]=='b'||s[i]=='c') {
	s[i]='2';
}
if(s[i]=='D'||s[i]=='E'||s[i]=='F'||s[i]=='d'||s[i]=='e'||s[i]=='f') {
	s[i]='3';
}
if(s[i]=='G'||s[i]=='H'||s[i]=='I'||s[i]=='g'||s[i]=='h'||s[i]=='i') {
	s[i]='4';
}
if(s[i]=='J'||s[i]=='K'||s[i]=='L'||s[i]=='j'||s[i]=='k'||s[i]=='l') {
	s[i]='5';
}
if(s[i]=='M'||s[i]=='N'||s[i]=='O'||s[i]=='m'||s[i]=='n'||s[i]=='o') {
	s[i]='6';
}
if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S'||s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s') {
	s[i]='7';
}
if(s[i]=='T'||s[i]=='U'||s[i]=='V'||s[i]=='t'||s[i]=='u'||s[i]=='v') {
	s[i]='8';
}
if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z'||s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z') {
	s[i]='9';
}
}
if(tn(s))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}

