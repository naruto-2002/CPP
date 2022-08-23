#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		string s;
		getline(cin,s);
		int count=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]==' '||s[i]=='\t'||s[i]=='\n') count++;
		}
		cout<<count+1<<endl;
	}
}

