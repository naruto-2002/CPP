#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;a
		cin>>n>>m;
		int A[n];
		for(int i=0; i<n; i++)
		{
			cin>>A[i];
		}
		while(m--)
		{
			int a,b;
			cin>>a>>b;
			int sum=0;
			for(int i=a-1; i<b; i++)
			{
				sum+=A[i];
			}
			cout<<sum<<endl;
		}
	}
}

