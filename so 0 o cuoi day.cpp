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
		for(long long i=0;  i<n; i++)
		{
			cin>>a[i];
		}
		int count=0;
		for(long long i=0; i<n; i++)
		{
			if(a[i]!=0) cout<<a[i]<<' ';
			else count++;
		}
		while(count--)
		{
			cout<<"0"<<' ';
		}
		cout<<endl;
	}
}

