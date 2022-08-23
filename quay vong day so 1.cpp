#include<bits/stdc++.h>
using namespace std;
int a[1000002];
void quayvong(int n, int d, int a[1000002])
{
	for(int i=d; i<n; i++)
	{
		cout<<a[i]<<' ';
	}
	for(int i=0; i<d; i++)
	{
		cout<<a[i]<<' ';
	}
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		quayvong(n,d,a);
		cout<<endl;
	}
}


