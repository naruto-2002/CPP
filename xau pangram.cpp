#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int n;
		cin>>s>>n;
		int a[150]={0};
		int count=0;
		for(int i = 0; i < s.length(); i++)
		{
			a[s[i]]++;
		}
		for(int i=97; i<123; i++)
		{
			if(a[i]!=0) count++;
		}
		if(n-(26-count) >= 0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
}

