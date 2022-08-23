#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len=s.length();
		int sum=0;
	  	  	for(int i=0; i<len; i++){
			if(s[i]>=48&&s[i]<=57){
				sum+=s[i]-'0';
				s.erase(i,1);
				i--;
				len--;
		    }
		}
		for(int i=0; i<s.length(); i++){
			for(int j=i+1; j<s.length(); j++){
				if(s[i]>s[j]) swap(s[i],s[j]);
			}
		}
		cout<<s<<sum<<endl;
	}
}

