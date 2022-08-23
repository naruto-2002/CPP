#include<bits/stdc++.h>
using namespace std;
main()
{
	string s,s1,s2[100];
	getline(cin,s);
	getline(cin,s1);
	int count=0;
	string delimiter=" ";
	size_t pos=0;
	string token;
	while((pos = s.find(delimiter))!= string::npos)
	{
		token = s.substr(0,pos);
		s2[count++]=token;
		s.erase(0, pos + delimiter.length());
	}
	s2[count++]=s;
    for(int i=0; i<count; i++)
    {
    	if(s2[i]!=s1) cout<<s2[i]<<' ';
	}
	
	
}

