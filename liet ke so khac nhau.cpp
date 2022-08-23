#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int v[n],a[n],q=0;
	for(int i=0; i<n; i++)
	{
		cin>>v[i];
	}
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(v[i]==v[j]) v[j]=-1;
		}
	}
	for(int i=0; i<n; i++)
	{
		if(v[i]!=-1) a[q++]=v[i];
	}
	sort(a,a+q);
	for(int i=0; i<q; i++)
	{
		cout<<a[i]<<' ';
	}
}

