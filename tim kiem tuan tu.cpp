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
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		int ok=0;
		for(int i=0; i<n; i++)
		{
			if(a[i]==m)
			{
				cout<<i+1<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"-1"<<endl;
		
	}
}

