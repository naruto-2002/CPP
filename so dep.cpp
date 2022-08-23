#include<bits/stdc++.h>
using namespace std;
int sthngh(string s)
{
	int len=s.length();
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]!=s[--len]) return 0;
	}
	return 1;
}
int sch(string s)
{
	for(int i=0; i<s.length(); i++)
	{
		if((s[i]-'0')%2!=0) return 0;
	}
	return 1;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(sthngh(s)&&sch(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

