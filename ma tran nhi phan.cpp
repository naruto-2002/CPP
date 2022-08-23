#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n][3];
	int result=0;
	for(int i=0; i<n; i++)
	{
		int so1=0,so0=0;
		for(int j=0; j<3; j++)
		{
			cin>>a[i][j];
			(a[i][j]==1)? so1++: so0++; 
		}
		(so1>so0)? result++ : 0;
	}
	cout<<result;
}

