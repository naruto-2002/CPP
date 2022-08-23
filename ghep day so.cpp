#include<bits/stdc++.h>
using namespace std;
void sapxep(int n, int a[])
{
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
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
		int n,k;
		cin>>k>>n;
		int a[k][n];
		int b[k*n],count=0;
		for(int i=0; i<k; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>a[i][j];
				b[count++]=a[i][j];
			}
		}
		sapxep(k*n,b);
		for(int i=0; i<k*n; i++)
		{
			cout<<b[i]<<' ';
		}
		cout<<endl;
	}
}

