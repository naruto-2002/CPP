#include<bits/stdc++.h>
using namespace std;
int c[1000001];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[n];
		int k=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			c[k++]=a[i];
		}
		for(int i=0; i<m; i++)
		{
			cin>>b[i];
			c[k++]=b[i];
		}
		for(long long i=0; i<k; i++)
		{
				for(long long j=i+1; j<k; j++)
			{
				if(c[i]>c[j]) swap(c[i],c[j]);
			}
		}
		for(long long i=0; i<k; i++)
		{
			cout<<c[i]<<' ';
		}
		cout<<endl;
	}
}

