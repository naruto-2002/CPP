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
		int len=s.length();
		if(s[len-1]-'0'==6&&s[len-2]-'0'==8) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

