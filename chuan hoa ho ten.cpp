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
		if(token[0]!='\0')
		{
			s1[count++]=token;
		}
		s.erase(0, pos + delimiter.length());
	}
	s1[count++]=s;
    for(int i=0; i<count-1; i++)
    {
    	s1[i][0]=toupper(s1[i][0]);
	}
	for(int i=0; i<s1[count-1].length(); i++)
	{
		s1[count-1][i]=toupper(s1[count-1][i]);
	}
	for(int i=0; i<count-1;  i++)
	{
		if(i==count-2) cout<<s1[i]<<',';
		else cout<<s1[i]<<' ';
	}
	cout<<' '<<s1[count-1]<<' ';
}

