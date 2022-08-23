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
		int ok=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]!=s[--len])
			{
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

