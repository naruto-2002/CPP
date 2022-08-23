#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		int max=a[0],min=a[0];
		for(int i=0; i<n; i++)
		{
			if(a[i]>max) max=a[i];
			if(a[i]<min) min=a[i];
		}
		int count=0;
		for(int i=min; i<max; i++)
		{
			int ok=1;
			for(int j=0; j<n; j++)
			{
				if(i==a[j]) ok=0;
			}
			if(ok==1) count++;
		}
		cout<<count<<endl;
	}
}

