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
		int kt=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]-'0'!=0&&s[i]-'0'!=6&&s[i]-'0'!=8) kt=1;
		}
		if(kt==0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

