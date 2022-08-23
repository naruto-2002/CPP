#include<bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,x,y;
		cin>>a>>x>>y;
		int s=__gcd(x,y);
		for(int i=0;i<s; i++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}

