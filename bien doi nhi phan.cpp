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
		int a[n][m];
		int hang[n]={0},cot[102]={0};
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>a[i][j];
				if(a[i][j]==1)
				{
					hang[i]=1;
					cot[j]=1;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			if(hang[i]==1)
			{
				for(int j=0; j<m; j++)
				{
					a[i][j]=1;
				}
			}
		}
		for(int j=0; j<m; j++)
		{
			if(cot[j]==1)
			{
				for(int i=0; i<n; i++)
				{
					a[i][j]=1;
				}
			}
		}
		for(int i=0; i<n; i++)
		{
				for(int j=0; j<m; j++)
				{
					cout<<a[i][j]<<' ';
				}
				cout<<endl;
		}
		
	}
}

