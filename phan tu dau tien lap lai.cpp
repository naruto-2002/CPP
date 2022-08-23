#include<bits/stdc++.h>
using namespace std;
int check(int n, int m, int a[]) 
{ 
	for (int i = n; i < m; i++)
    {
	  for (int j = i + 1; j < m; j++) 
	   { 
	  		if (a[i] == a[j]) return 0;
	   } 
	} 
	return 1; 
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
		int ok=0;
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(a[i]==a[j]&&check(i,j,a))
				{
					ok=1;
					cout<<a[i]<<endl;
					break;
				}
			}
			if(ok==1) break;
		}
		if(ok==0) cout<<"-1"<<endl;
	}
}

