#include<bits/stdc++.h>
using namespace std;
int sngt(int n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int i=1; i<=n; i++)
		{
			if(__gcd(n,i)==1) count++;
		}
		if(sngt(count)) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

