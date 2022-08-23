#include<bits/stdc++.h>
using namespace std;
void sapxep(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]<a[j]) swap(a[i],a[j]);
		}
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sapxep(n,a);
		for(int i=0; i<k; i++) cout<<a[i]<<' ';
		cout<<endl;
	}
}

