#include<bits/stdc++.h>
using namespace std;
int b[1000001];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int count=0;
		for(int i=0; i<n; i++) cin>>a[i];
		
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				b[count++]=a[i]+a[j];
			}
		}
		int min=10000000000000;
	    for(int i=0; i<count; i++)
	    {
	    	if(abs(b[i])<min) min=abs(b[i]);
		}
		for(int i=0; i<count; i++)
		{
			if(min==abs(b[i]))
			{
				cout<<b[i]<<endl;
				break;
			}
		}
	}
}

