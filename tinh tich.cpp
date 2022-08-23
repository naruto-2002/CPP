#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		int max=-10000000000000;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]>max) max=a[i];
		}
		int min=100000000000000;
		for(int i=0; i<m; i++)
		{
			cin>>b[i];
			if(b[i]<min) min=b[i];
		}
		cout<<(long long)max*min<<endl;
	}
}

