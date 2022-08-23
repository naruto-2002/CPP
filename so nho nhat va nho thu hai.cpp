#include<bits/stdc++.h>
using namespace std;
void sapxep(int n, int a[])
{
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j]) swap(a[i],a[j]);
}
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
		sapxep(n,a);
		if(a[0]!=a[1]) cout<<a[0]<<' '<<a[1]<<endl;
		else cout<<"-1"<<endl;
	}
}

