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
			for(int i=0; i<s.length()-1; i++)
			{
				if(abs(s[i]-s[i+1])!=1) kt=1;
			}
			if(kt==0) cout<<"YES";
			else cout<<"NO";
			cout<<endl;
	}
}

