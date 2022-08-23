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
		int r=0;
		for(int i=0; i<s.length(); i++)
		{
			r=(2*r + s[i]-'0')%5;
		}
		if(r!=0) cout<<"No";
		else cout<<"Yes";
		cout<<endl;
	}
}

