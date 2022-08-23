#include<bits/stdc++.h>
using namespace std;
int sngt(long long n)
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
		long long n,m;
		cin>>n>>m;
		int count=0;
		for(long long i=2; i<=sqrt(m); i++)
		{
			if(sngt(i)&&i>=sqrt(n)) count++;
		}
		cout<<count<<endl;
	}
}



