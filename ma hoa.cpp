#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[300]={0};
		for(int i=0; i<s.length(); i++)
		{
			a[s[i]-'0']++;
		}
		char s1='*';
		for(int i=0; i<s.length(); i++)
		{
			for(int j=i+1; j<s.length(); j++)
			{
				if(s[i]==s[j]) s[j]=s1;
			}
		}
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]!=s1) cout<<s[i]<<a[s[i]-'0'];
		}
		cout<<endl;
	}
}

