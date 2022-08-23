#include<bits/stdc++.h>
using namespace std;
void sapxep(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sapxep(n,a);
		int m=n;
		for(int i=0; i<n/2; i++)
		{
			cout<<a[i]<<' '<<a[--m]<<' ';
		}
			if(n%2!=0) cout<<a[n/2]<<' ';
		cout<<endl;
	}
}

