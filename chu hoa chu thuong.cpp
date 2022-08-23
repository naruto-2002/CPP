#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s;
		cin>>s;
		if(s>='a'&&s<='z') s=toupper(s);
		else s=tolower(s);
		cout<<s<<endl;
	}
}

