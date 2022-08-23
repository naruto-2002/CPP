#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	string c;
	getline(cin,c);
	string s[10004];
	string s1="abc"; 
	for(int i=0; i<t; i++)
	{
		getline(cin,s[i]);
	}
	for(int i=0; i<t; i++)
	{
		for(int j=i+1; j<t; j++)
		{
			if(s[i]==s[j]) s[j]=s1;
		}
	}
	int count=0;
	for(int i=0; i<t; i++)
	{
		if(s[i]!=s1) count++;
	}
	cout<<count;
}


