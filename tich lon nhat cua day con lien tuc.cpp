#include<bits/stdc++.h>
using namespace std;
long long b[1000001];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n];
		long long q=0;
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n; i++)
		{
			long long kq=1;
			for(int j=i; j<n; j++)
			{
				kq*=a[j];
				b[q++]=kq;
				if(kq==0) kq=1;
			}
		}
		long long max=b[0];
		for(int i=0; i<q; i++)
		{
			if(b[i]>max) max=b[i];
		}
		cout<<max<<endl;
		
	}
}

