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
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		int min=100000000000;
		sort(a,a+n);
		for(int i=0; i<n-1; i++)
		{
			if(abs(a[i]-a[i+1])<min) min=abs(a[i]-a[i+1]);
		}
		cout<<min<<endl;
	}
}

