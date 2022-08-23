#include<bits/stdc++.h>
using namespace std;
    
set<string> tach(string s, set<string> ss){
	int count=0;
	string delimiter=" ";
	size_t pos=0;
	string token;
	while((pos = s.find(delimiter))!= string::npos)
	{
		token = s.substr(0,pos);
		ss.insert(token);
		s.erase(0, pos + delimiter.length());
	}
	ss.insert(s);
	return ss;
}
main()
{
	int t;
	cin>>t;
	int m=t;
	while(t--){
		if(t==m-1){
			string c;
			getline(cin,c);
		}
		string s,s1,s2[100];
		getline(cin,s);
		getline(cin,s1);
		set<string> str1,str2;
		str1=tach(s,str1);
		str2=tach(s1,str2);
		for(set<string> :: iterator it= str1.begin(); it!=str1.end(); it++){
			if(!str2.count(*it)) cout<<*it<<' ';
	    }
	    cout<<endl;
	}
    
	
	
}

	


