#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n][n];
		int b[n*n],count=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>a[i][j];
				b[count++]=a[i][j];
			}
		}
		sort(b,b+n*n);
		cout<<b[k-1]<<endl;
		
	}
}

