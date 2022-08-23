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
		int a=0,b=0;
		for(int i=0; i<s.length(); i++)
		{
			if(i%2==0) a+=s[i]-'0';
			else b+=s[i]-'0';
		}
		if((a-b)%11==0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

