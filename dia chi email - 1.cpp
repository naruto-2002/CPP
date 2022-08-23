#include<bits/stdc++.h>
using namespace std;
main()
{
	string s,s1[100];
	getline(cin,s);
	for(int i=0; i<s.length(); i++)
	{
		s[i]=tolower(s[i]);
	}
	int count=0;
	string delimiter=" ";
	size_t pos=0;
	string token;
	while((pos = s.find(delimiter))!= string::npos)
	{
		token = s.substr(0,pos);
		s1[count++]=token;
		s.erase(0, pos + delimiter.length());
	}
	s1[count++]=s;
	cout<<s1[count-1];
    for(int i=0; i<count-1; i++)
    {
    	cout<<s1[i][0];
	}
	cout<<"@ptit.edu.vn";
	
}

