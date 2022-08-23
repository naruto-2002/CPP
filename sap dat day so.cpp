#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		unsigned long int a[n];
		for(long long i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(long long i=0; i<n; i++)
		{
			int ok=0;
			for(long long j=0; j<n; j++)
			{
				if(a[j]==i) ok=1;
			}
			if(ok==1) cout<<i<<' ';
			else cout<<"-1"<<' ';
		}
		cout<<endl;
	}
}

