#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	int m=t;
	string str[100];
	int dem=0;
	while(t--){
		if(t==m-1){
			string c;
			getline(cin,c);
		}
		char s[100],s1[100][50];
		fgets(s,99,stdin);
		int len = strlen(s);
		s[len-1]='\0';
		for(int i=0; i<len; i++){
			s[i]=tolower(s[i]);
		}
		int count=0;
		char *p;
		p = strtok(s," ");
		while(p!=NULL){
			strcpy(s1[count++],p);
			p= strtok(NULL," ");
		}
		string ss="";
		ss+=s1[count-1];
		for(int i=0; i<count-1; i++){
			ss+=s1[i][0];
		}
		int dem1=1;
		for(int i=0; i<dem; i++){
			if(ss==str[i]){
				dem1++;
			}
		}
		str[dem++]=ss;
		if(dem1!=1){
			cout<<ss<<dem1<<"@ptit.edu.vn"<<endl;
		}else{
			cout<<ss<<"@ptit.edu.vn"<<endl;
		}
		
	}
    
	
	
}

	



