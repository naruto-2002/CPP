#include<bits/stdc++.h>
using namespace std;
int b[1000000];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],p=0;
		int kt=1;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(a[i]<a[j])
				{
					 b[p++]=a[j]-a[i];
					 kt=0;
				}
			}
		}
		int max=b[0];
		for(int i=0; i<p; i++)
			{
				if(b[i]>max) max=b[i];
			}
		if(kt==1) cout<<"-1";
		else cout<<max<<endl;
	}
}

