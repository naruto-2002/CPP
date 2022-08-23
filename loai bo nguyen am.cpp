#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
		s[i]=tolower(s[i]);
	}
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') s[i]=' ';
	}
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]!=' ')
		{
			cout<<'.'<<s[i];
		}
	}
}

